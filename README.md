Systèmes L3 2023-2024
=================

**Conseil :** cloner ce dépôt et travailler directement dans le répertoire cloné.

```bash
git clone git@gaufre.informatique.univ-paris-diderot.fr:poulalho/sy5-2023-2024.git
...
git pull
```
(ce mode de clonage nécessite une authentification par le protocole `ssh`
et non `http`, cf TP nº1)

# Équipe pédagogique

| | | |
|---:|---|---|
| amphi + TP groupe MI | Dominique Poulalhon | dominique.poulalhon@irif.fr |
| TP groupe INFO 1 | Anne Micheli | anne.micheli@irif.fr |
| TP groupes INFO 2 et 3 | Guillaume Geoffroy |  guillaume.geoffroy@irif.fr |
| TP groupe INFO 4 | Raphaël Cosson | cosson@irif.fr |
| TP groupe INFO 5 | Isabelle Fagnot | fagnot@irif.fr |


# Suggestions pour réviser le C

* _Modern C_, de Jens Gustedt, 2020 (Manning Publications), [disponible en
  ligne](https://modernc.gforge.inria.fr/)
* [un tutoriel qui a une bonne
  tête](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/); voir la
  section II en particulier.

# Suggestions de ressources externes 

Attention, ces ressources traitent beaucoup plus que le contenu du cours,
il est facile de s'y perdre...

* _UNIX, Programmation et communication_, J.-M. Rifflet et J.-B. Yunès, Dunod
* _Modern Operating Systems_, A. Tanenbaum, Pearson; les 2e et 3e éditions ont été traduites en français (_Systèmes d'exploitation_)
* [le manuel de POSIX](https://pubs.opengroup.org/onlinepubs/9699919799/)


# Modalités d'évaluation

La note finale tiendra compte des éléments suivants :
* assiduité (vérification systématique de la présence en TD/TP)
* 2 QCMs (sans doute fin octobre et courant décembre)
* projet (énoncé donné fin octobre, échéancier à respecter, rendu et
  soutenance)
* examen écrit


# Cours

* [cours nº1](Cours/cours_1.pdf) : introduction, rôle d'un système
  d'exploitation, notions de processus, de fichier, d'appel système

* cours nº2 : `open` et `close`; 
  tables des inoeuds (virtuels), des fichiers ouverts, des descripteurs; 
  rôle des compteurs; 
  flags et opérateurs logiques binaires; 
  pointeur de position courante; 
  `read`, `write` (première approche, nous y reviendrons); 
  [slides](Cours/cours_2.pdf) + [programmes](Cours/code-cours-2) présentés en cours

* cours nº3 : retour sur `read` et `write`; `lseek`; les entrés/sorties 
  via la bibliothèque standard; `dup2`;
  [slides](Cours/cours_3.pdf) +
  [programmes](Cours/code-cours-3) présentés en cours

* cours nº4 : différentes stratégies pour stocker les fichiers; inoeuds
  (physiques); consultation avec `stat` et dérivés;
  [slides](Cours/cours_4.pdf) +
  [programme](Cours/code-cours-4) présenté en cours

* cours nº5 : organisation du SGF; ouverture et parcours de répertoires;
  [slides](Cours/cours_5.pdf) +
  [programme](Cours/code-cours-5) présenté en cours

# TD et TP

* [énoncé de TP nº1](TP/TP1/tp1.pdf) : `ssh` et rappels
* [énoncé de TP nº2](TP/TP1/tp2,md) : entrées-sorties
* [énoncé de TP nº3](TP/TP1/tp3.md) : manipulation d'archives `tar`


# Sujets d'examen

* [sujet 2021-2022](Examens/examen_2021-2022_session1_SY5.pdf)
* [sujet 2022-2023](Examens/examen_2022-2023_session1_SY5.pdf)

