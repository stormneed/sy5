#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "tarutils.h"
struct posix_header hd;



int main(int argc, char **argv){
  int fd, ret = 0;
  unsigned int filesize, filemode, nblocks;
  struct posix_header * phd = &hd;

  if (argc != 2) {
    fprintf(stderr, "Usage : %s file.tar\n", argv[0]);
    exit(1);
  }
  
  /* ouverture du fichier tar */
  fd = open(argv[1], O_RDONLY);
  if (fd < 0) { 
    perror("open"); 
    exit(1); 
  }

  int n;
  int s;
  /* boucle principale */
  while (1) {
    /* TODO : lecture de l'entête; vérifier que la lecture est bien complète */
   
    n=read(fd,phd,BLOCKSIZE);
    if(n!=BLOCKSIZE){
      ret= 1;
      break;
    }

   
    

    /* TODO : la fin de l'archive est atteinte si le bloc est rempli de zéros, 
     * et en particulier si name == "" */
    if(strlen(phd->name)==0){
      ret=0;
      break;
    }

    /* vérification de la checksum (facultatif) */
    /* if (!check_checksum(phd)) {
      fprintf(stderr, "Checksum erronée : %s\n", phd -> chksum);
      ret = 1;
      break;
      }*/

    /* TODO : calcul des droits, de la taille et du nombre de blocs occupés --
     * ce nombre est la partie entière supérieure de filesize / BLOCKSIZE, 
     * c'est-à-dire (filesize + BLOCKSIZE - 1) >> BLOCKBITS*/

    filemode=sscanf(phd->mode, "%o", &filemode);
    filesize=sscanf(phd->size, "%o", &filesize);
    nblocks=(filesize+511)/BLOCKSIZE;
    
    /* affichage des informations de l'entête : droits en octal, taille 
     * en décimal, nombre de blocs en décimal, nom du fichier */
    printf("%o\t%d\t%d\t%s\n", filemode, filesize, nblocks, phd -> name);

    /* TODO : saut à l'entête suivant */

    s=lseek(fd,nblocks*BLOCKSIZE,SEEK_CUR);
    if(s<0){
      ret=1;
      break;
    }
    
    

  }

  /* TODO : fermeture du fichier tar */
  close(fd);
  
  exit(ret);
}
