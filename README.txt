- en un premier temps je me suis occupé l'organisation du programme, donc la
declaration des differentes classes qui allaient exister dans mon programme,
comme elles intéragisseraient entre elles et les informations qu'elles
contiendraient.

- la lecture du fichier DicoFR.txt en premier je me suis chargé de lire 
correctement ce fichier la. pour cela j'ai fait un fichier nommé "test.txt"
(que j'ai supprimé par la suite), qui contenait les 10 premieres lignes du
fichier DicoFR.txt, pour develloper un premier algo qui lisait le fichier
et affichait les infos avec qDebug (equivalent en Qt de cout, cout etant
l'equivalent en C++ de printf en C).
	une fois cet algo efficace sur le fichier test.txt je l'ai appliqué
au fichier DicoFR.txt en parcourant tout le fichier et en affichant que la 
derniere ligne. je me suis alors rendu compte que la derniere ligne etait 
décalée. la forme de base a la place de la flechie et les infos a la place de
la forme de base. C'est alors que j'ai trouvé que certains mots n'avaient pas
de forme fléchie et qu'il fallait donc aussi traiter des lignes a 2 mots.

- apres la lecture du fichier il faut enregistrer les infosmartions récupérées
et donc j'ai écrit la methode "ajouterMot" de la classe "arbreLettres". Et
pour la tester les methodes "afficherNom", "afficherAdj", etc et les boutons
correspondant dans la classe "fenetre". cette etape c'est déroulé sans problemes.

- vint ensuite l'étape de generations de phrases, donc l'ecriture du fichier
"StructuresPhrases.txt" et la complexion du constructeur de la classe "fenetre".
et la methode "affichePhrase", ainsi que le bouton "genrePhrase".

-une fois tout cela fait j'ai ajouté, pour des raisons esthetiques la fenetre
contenant la barre de chargement qui s'affiche lors de l'execution.

-l'emplacement des differents widgets fut décidé tout au long du développement
quand cecis etaient necessaires.

NOTES SUP:

-j'ai décidé d'enregistrer les structures des phrases dans un fichier car cela
permet d'ajouter ou modifier une nouvelle structure sans avoir a recompiler 
le code.

- je n'ai pas fait la gestion des accords et des conjugaisons car je suis nul
en français (celui qui lit ceci devrait deja l'avoir réalisé) et je ne veut 
pas faire un code qui contienne des fautes.