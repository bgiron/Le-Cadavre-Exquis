
Ce code, réalisé avec Qt, est un générateur de cadavre exquis. C’est-à-dire qu’il génère des phrases complètements aléatoires mais grammaticalement correctes.

Bugs connus :
-Certains mots sont lus incomplets dans le fichier source. L’origine de ce bug est inconnue.

Améliorations à faire :
-faire la conjugaison des verbes.
-inclure les articles devant les noms quand c’est nécessaire.

Réalisation du code :
- en un premier temps je me suis occupé de l'organisation du programme, donc la déclaration des différentes classes qui allaient exister dans mon programme, comment elles devront interagir entre elles et les informations qu'elles contiendront.

- la lecture du fichier DicoFR.txt avant tout. Je me suis chargé tout d’abord de lire correctement ce fichier-là. Pour cela j'ai fait un fichier nommé "test.txt" (que j'ai supprimé par la suite), qui contenait les 10 premières lignes du fichier DicoFR.txt, pour développer un premier algo qui lisait le fichier et affichait les infos avec qDebug (équivalent en Qt de cout, cout étant l'équivalent en C++ de printf en C).
	Une fois cet algo efficace, sur le fichier test.txt, je l'ai appliqué au fichier DicoFR.txt en parcourant tout le fichier et en affichant uniquement la dernière ligne. Je me suis alors rendu compte que la dernière ligne était  décalée. La forme de base à la place de la fléchie et les infos a la place de la forme de base. C'est alors que j'ai trouvé que certains mots n'avaient pas de forme fléchie et qu'il fallait donc aussi traiter des lignes a 2 mots, au lieu lire à chaque fois 3 mots par ligne.

- après la lecture du fichier il faut enregistrer les informations récupérées et donc j'ai écrit la méthode "ajouterMot" de la classe "arbreLettres". Et pour la tester les méthodes "afficherNom", "afficherAdj", etc. et les boutons correspondant dans la classe "fenetre". Cette étape s’est déroulée sans problèmes.

- vint ensuite l'étape de générations de phrases, donc l'écriture du fichier "StructuresPhrases.txt" et la complexion du constructeur de la classe "fenetre". Et la méthode "affichePhrase", ainsi que le bouton "generePhrase". 

-une fois tout cela fait j'ai ajouté, pour des raisons esthétiques la fenêtre contenant la barre de chargement qui s'affiche lors de l'exécution.

-l'emplacement des différents widgets fut décidé tout au long du développement au fur et à mesure que ces widgets étaient ajoutés au code.

NOTES SUP:
-Les mots générés aléatoirement sont affichés dans un champ de texte non modifiable pour qu'ils puissent être copiés-collés.

-j'ai décidé d'enregistrer les structures des phrases dans un fichier car cela permet d'ajouter ou modifier une nouvelle structure sans avoir à recompiler  le code.

-je n'ai pas fait la gestion des accords et des conjugaisons car je suis nul en français (celui qui lit ceci devrait déjà l'avoir réalisé) et je ne veux  pas faire un code qui contienne des fautes.
