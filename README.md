# Piscine 42

En **juillet 2025**, j’ai participé à l’**épreuve de sélection de [l’École 42](https://42.fr/)**, surnommée *la Piscine*.  
Un mois d’immersion totale où chaque jour se résume à **coder, comprendre, échouer, recommencer… jusqu’à progresser**.  

La Piscine, ce n’est pas seulement du code : c’est **apprendre à apprendre**, repousser ses limites et développer une **vraie résilience** face à la difficulté. C’est aussi une **expérience humaine unique**, où l’on partage autant les réussites que les échecs.

Après un mois de travail acharné et une immersion totale dans la Piscine, j’ai atteint le niveau 10,66. Aujourd’hui, **je suis fier d’avoir réussi cette épreuve** et d’avoir été sélectionné pour **la rentrée de novembre 2025** à **l’École 42 Paris**.

  <img src="level.png" alt="Mon avancement" />

Ce dépôt n’a pas vocation à fournir des solutions toutes faites.  
Il représente avant tout un **journal de bord**, un moyen de garder une **trace de mon évolution** et de mon **apprentissage**. 

## Les days

Les **days** sont le cœur de la Piscine 42.  

Chaque day (C00, C01, …) propose une série d’exercices progressifs à réaliser en un ou plusieurs jours.  

Pour avancer, il faut valider le day en réussissant au minimum les **exercices obligatoires**, qui assurent la moyenne et débloquent l’accès au suivant. Les autres exercices sont alors considérés comme des **bonus** : ils permettent d’aller plus loin, de renforcer sa compréhension et de grappiller des points supplémentaires pour ceux qui veulent se challenger.

Une fois un day finalisé, il peut être soumis à la correction. Chaque exercice est alors évalué par **deux autres Piscineux**, qui jugent et notent le travail réalisé. C’est un moment clé de la Piscine : on échange, on compare nos approches et on met en pratique le **peer learning** de la meilleure façon possible.
  
Après ces deux corrections humaines, vient l’étape tant redoutée : la fameuse **moulinette**. 

Elle balance une pluie de tests automatiques sans pitié pour vérifier si ton code tient vraiment la route.  C’est un mélange bizarre entre stress et excitation : tu croises les doigts pour qu’elle ne te sorte pas un joli <span style="color:red; font-weight:bold;">**“KO”**</span>. Et quand, par miracle, le <span style="color:green; font-weight:bold;">**“OK”**</span> s’affiche… c’est la délivrance (jusqu’au prochain day) !

---

<div align="center">

⚠️ **Note importante ⚠️**

Si tu es en train de vivre la Piscine, oublie l’idée de tricher en recopiant du code trouvé ailleurs.  Tu ne feras que **saboter ta Piscine**, rater tes exams et passer à côté de ce qui compte vraiment. 

La Piscine, c’est avant tout un mois pour apprendre à chercher, tester, échouer, recommencer et progresser. Parfois tu avances vite, parfois tu bloques longtemps sur un détail… et c’est normal. **Chacun nage à son rythme, l’important c’est d’aller de l’avant.**

</div>

---

### [Shell00](https://github.com/Niftix/Piscine_42/tree/main/shell00)

La Piscine débute par le **Shell** : une plongée directe dans les bases du terminal Linux.  
Créer, déplacer et supprimer des fichiers, gérer les permissions, manipuler les répertoires… tout ce qu’il faut pour apprendre à **se débrouiller sans interface graphique.** 

 <img src="shell00/img/note.png" alt="Shell00 – notes" width="35%"/>

La mise en route est compliquée, mais **on se fait très rapidement la main.**  
C’est la première étape avant de toucher au C, et elle pose les fondations indispensables pour la suite du cursus.  

---

### [Shell01](https://github.com/Niftix/Piscine_42/tree/main/shell01)

Après avoir pris nos marques avec les bases du Shell, ce day vient ajouter une **couche de complexité**.  
On y découvre les **liens symboliques**, la gestion plus fine des **permissions**, les commandes un peu plus poussées…  

 <img src="shell01/img/note.png" alt="Shell01 – notes" width="35%"/>

La logique reste la même : **pratiquer, se tromper, recommencer**.  
Ce ne sont clairement pas mes days favoris, mais il faut commencer par là pour être à l’aise tout au long de la **Piscine**.  

---

### [C00](https://github.com/Niftix/Piscine_42/tree/main/c00)

Enfin… le **C** ! Après les journées un peu rébarbatives du Shell, ce module sonne comme une vraie délivrance.  
On met les mains dans le code, on écrit nos **premières fonctions en C**, et on commence à comprendre la logique derrière la programmation.  

 <img src="c00/img/note.png" alt="c00 – notes" width="35%"/>

Je termine ce module à **85%**. J’ai volontairement laissé `ft_print_comb` de côté, bien trop difficile à ce stade.

Le day en lui-même reste un bon souvenir. Avec `ft_putnbr`, j’ai eu un premier aperçu de la **récursivité**. Un concept un peu vertigineux au début, pas évident à digérer aussi tôt, mais qui donne cette sensation de vraiment toucher à la logique profonde du langage C.  

Quant aux fameux exercices bonus… le plan de revenir dessus plus tard n’aura jamais tenu. Spoiler : `ft_print_comb` ne sera jamais fait, tout comme d’autres bonus laissés sur le côté. À la Piscine, le temps finit toujours par rattraper tout le monde. 

---

### [C01](https://github.com/Niftix/Piscine_42/tree/main/c01)

C01 est un **day clé de la Piscine** : c’est ici qu’on découvre vraiment les **pointeurs** et la **manipulation de strings**.  Au début, ça peut paraître abstrait, mais il ne faut surtout pas hésiter à prendre du temps dessus, car c’est un concept fondamental en C. 
Une fois la logique comprise, le day devient beaucoup plus clair et abordable.  

<img src="c01/img/note.png" alt="c01 – notes" width="35%"/>

Le dernier exercice introduit le **bubble sort**, un algorithme de tri simple mais essentiel à connaître. C’est vraiment à ce moment-là que l’on sent que les bases commencent à s’installer pour la suite de la Piscine.  

---

### [C02](https://github.com/Niftix/Piscine_42/tree/main/c02)

Sur ce day nous attaquons sérieusement la **manipulation de strings**.  

Ici, on recrée à la main plusieurs fonctions de la librairie standard : `ft_strcpy`, `ft_strncpy`, `ft_strlcpy`… la difficulte reside dans le fait de bien les comprendre de l’intérieur pour maitriser leurs differences.

<img src="c02/img/note.png" alt="c02 – notes" width="35%"/>

Je finirai ce day à **85%**.  J’avais volontairement laissé l’exercice bonus `ft_print_memory` pour plus tard, car il me paraissait trop difficile à ce stade. En réalité, comme beaucoup d’autres bonus, je n’y reviendrai jamais…
 
---

### [C03](https://github.com/Niftix/Piscine_42/tree/main/c03)

On continue l’exploration des **strings** mais à un niveau supérieur.  Comme pour le day précédent, il faut vraiment prendre le temps de comprendre les différences et le fonctionnement des fonctions de la librairie standard.  Une fois cette étape franchie, ce day s’appréhende finalement assez facilement.  

<img src="c03/img/note.png" alt="c03 – notes" width="35%"/>

C’est un day qui forge la patience et qui oblige à coder proprement, sinon… ça casse.  

---


### [C04](https://github.com/Niftix/Piscine_42/tree/main/c04)

Ce day commence en douceur, avec **trois exercices déjà rencontrés précédemment**, histoire de se mettre en jambe.  C’est aussi le moment de découvrir le fameux `ft_atoi`, dont on entend parler depuis le début de la Piscine.  

En revanche, `ft_atoi_base` et `ft_putnbr_base` font clairement peur au premier abord.  Je ne les toucherai pas dans un premier temps, préférant avancer sur les days suivants. Mais tout change en arrivant à **C07** : l’exercice `convert_base` me semble tellement vertigineux que je me dis que je n’y arriverai jamais sans avoir fini les deux autres exercices de base, puisqu’il les reprend clairement.  

<img src="c04/img/note.png" alt="c04 – notes" width="35%"/>

C’est à ce moment-là que je reviens sur C04 pour m’acharner sur eux.  Ces exercices restent assez **prise de tête**, et la moindre erreur s’y glisse facilement.  J’y ferai pas mal de fautes, mais à force de persévérance, je finirai par en venir à bout et valider ce day. 

---

### [C05](https://github.com/Niftix/Piscine_42/tree/main/c05)

On l’appelle souvent **le day des maths**, et rien que ça en fait fuir plus d’un. Pour ma part, je l’ai trouvé au contraire **plutôt cool** ! C’est ici qu’on joue vraiment avec la **récursivité**, et qu’on commence à voir toute sa puissance.  

Beaucoup préfèrent sauter ce day, mais honnêtement, il vaut vraiment le détour. Un exercice comme `ft_fibonacci` m’a permis de comprendre en profondeur le fonctionnement des **sous-tâches récursives** et le principe de **remontée de la pile d’appels**.  C’est un passage qui peut sembler abstrait, mais une fois qu’on a le déclic, ça change tout.  

<img src="c05/img/note.png" alt="c05 – notes" width="35%"/>

Le dernier exercice, le fameux **10 dames**, est considéré comme l’un des plus coriaces de la Piscine. Grâce au **Rush01**, on entrevoit la solution avec la découverte du **backtracking**, indispensable pour espérer le réussir.  

J’aurais adoré le tenter ! Mais comme pour d’autres exercices bonus, je ne validerai pas celui-ci.  

---

### [C06](https://github.com/Niftix/Piscine_42/tree/main/c06)

Enfin les **paramètres du main** (`argc` et `argv`).  Rien de bien compliqué en soi : il s’agit surtout de comprendre comment récupérer et manipuler les arguments passés en ligne de commande.  

<img src="c06/img/note.png" alt="c06 – notes" width="35%"/>

Pour ma part, j’avais déjà dû me confronter à ce sujet un peu plus tôt, dans un contexte où je n’avais pas vraiment le choix.  J’ai donc dû chercher, expérimenter et trouver une solution par moi-même.  Résultat : une fois arrivé sur ce day, tout me paraissait déjà beaucoup plus simple et naturel.  

---

### [C07](https://github.com/Niftix/Piscine_42/tree/main/c07)

Pour moi, **C07** a été un vrai gros morceau.  

C’est ici qu’on découvre vraiment l’**allocation dynamique**, et qu’on se confronte à deux exercices marquants :  
- `ft_split`, qui m’a demandé énormément de réflexion.
- `ft_convert_base`, qui m’a forcé à revenir sur C04 pour valider enfin les exercices que j’avais laissés de côté.

<img src="c07/img/note.png" alt="c07 – notes" width="35%"/>

Sur `ft_split`, il faut vraiment prendre **le temps de comprendre ce qui se passe**, pas seulement écrire du code au feeling.  
C’est un exercice qui oblige à avancer pas à pas, à réfléchir avec méthode et à rester patient si on veut arriver au bout.

Pour `ft_convert_base`, il est capital d’avoir réussi et bien compris `ft_atoi_base` et `ft_putnbr_base` du C04.  
Une fois ces deux exercices assimilés, celui-ci paraît beaucoup plus simple et se réalise finalement assez naturellement.

C’est un day exigeant, mais qui laisse  **un vrai sentiment de progression.**

---

### [C08](https://github.com/Niftix/Piscine_42/tree/main/c08)

À ce stade de la Piscine, on commence à écrire des programmes avec de plus en plus de fonctions.  
Il devient alors indispensable d’apprendre à mieux organiser son code, c’est le moment de découvrir les fameux **fichiers `.h`**, qui servent de pont entre nos différentes fonctions. 

<img src="c08/img/note.png" alt="c08 – notes" width="35%"/>

---

### [C09](https://github.com/Niftix/Piscine_42/tree/main/c09)  

On quitte définitivement les petits exercices isolés pour entrer dans une logique de **mini-projet**, où l’organisation du code devient aussi importante que son contenu.  

<img src="c09/img/note.png" alt="c09 – notes" width="35%"/>

C’est également l’occasion de découvrir l’utilité d’un **Makefile**. Grâce au projet du **BSQ**, j’avais déjà eu l’occasion de m’y pencher de près, et je n’ai donc pas rencontré de difficulté particulière sur ce day.  
