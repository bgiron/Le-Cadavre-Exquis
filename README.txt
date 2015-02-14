
Ce code, r�alis� avec Qt, est un g�n�rateur de cadavre exquis. C�est-�-dire qu�il g�n�re des phrases compl�tements al�atoires mais grammaticalement correctes.

Bugs connus :
-Certains mots sont lus incomplets dans le fichier source. L�origine de ce bug est inconnue.

Am�liorations � faire :
-faire la conjugaison des verbes.
-inclure les articles devant les noms quand c�est n�cessaire.

R�alisation du code :
- en un premier temps je me suis occup� de l'organisation du programme, donc la d�claration des diff�rentes classes qui allaient exister dans mon programme, comment elles devront interagir entre elles et les informations qu'elles contiendront.

- la lecture du fichier DicoFR.txt avant tout. Je me suis charg� tout d�abord de lire correctement ce fichier-l�. Pour cela j'ai fait un fichier nomm� "test.txt" (que j'ai supprim� par la suite), qui contenait les 10 premi�res lignes du fichier DicoFR.txt, pour d�velopper un premier algo qui lisait le fichier et affichait les infos avec qDebug (�quivalent en Qt de cout, cout �tant l'�quivalent en C++ de printf en C).
	Une fois cet algo efficace, sur le fichier test.txt, je l'ai appliqu� au fichier DicoFR.txt en parcourant tout le fichier et en affichant uniquement la derni�re ligne. Je me suis alors rendu compte que la derni�re ligne �tait  d�cal�e. La forme de base � la place de la fl�chie et les infos a la place de la forme de base. C'est alors que j'ai trouv� que certains mots n'avaient pas de forme fl�chie et qu'il fallait donc aussi traiter des lignes a 2 mots, au lieu lire � chaque fois 3 mots par ligne.

- apr�s la lecture du fichier il faut enregistrer les informations r�cup�r�es et donc j'ai �crit la m�thode "ajouterMot" de la classe "arbreLettres". Et pour la tester les m�thodes "afficherNom", "afficherAdj", etc. et les boutons correspondant dans la classe "fenetre". Cette �tape s�est d�roul�e sans probl�mes.

- vint ensuite l'�tape de g�n�rations de phrases, donc l'�criture du fichier "StructuresPhrases.txt" et la complexion du constructeur de la classe "fenetre". Et la m�thode "affichePhrase", ainsi que le bouton "generePhrase". 

-une fois tout cela fait j'ai ajout�, pour des raisons esth�tiques la fen�tre contenant la barre de chargement qui s'affiche lors de l'ex�cution.

-l'emplacement des diff�rents widgets fut d�cid� tout au long du d�veloppement au fur et � mesure que ces widgets �taient ajout�s au code.

NOTES SUP:
-Les mots g�n�r�s al�atoirement sont affich�s dans un champ de texte non modifiable pour qu'ils puissent �tre copi�s-coll�s.

-j'ai d�cid� d'enregistrer les structures des phrases dans un fichier car cela permet d'ajouter ou modifier une nouvelle structure sans avoir � recompiler  le code.

-je n'ai pas fait la gestion des accords et des conjugaisons car je suis nul en fran�ais (celui qui lit ceci devrait d�j� l'avoir r�alis�) et je ne veux  pas faire un code qui contienne des fautes.
