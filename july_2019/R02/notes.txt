PROTOTYPES DES FONCTIONS A UTILISER

char    *ft_strstr(char *str, char *to_find);
int     ft_atoi(char *str);
void    ft_print_error(void);
void    ft_print_dict_error(void);
char    **ft_split(char *str, char *charset);

#############################################################################################################

CAS NUMERO 1 : ARGC = 2

if (argc == 2)
    // argv[1] contient le nb a ecrire
    // dans ce cas ou est le dico ?? il faut surement le creer...



#############################################################################################################

CAS NUMERO 2 : ARGC = 3

if (argc == 3)
    // argv[1] contient le dico,
    // argv[2] contient le nb a ecrire
if (ft_atoi(argv[2]) < 0)      //nb n'est pas un entier positif valide
    ft_print_error();
if (ft_strstr(argv[1], ft_atoi(argv[2])) == 0)  //on ne trouve pas le nb dans le dictionnaire
    ft_print_error();
if (ft_split(argv[1], *separateur) == -1)   //si le split echoue (configurer un return (-1) en cas d'erreur dans la fonction)
    ft_print_dict_error();

Deroulement des actions (a preciser) :
1 - on split le dico pour se retrouver avec un **dico
    dico[0] contient les int
    dico[1] contient les char
    donc dico[0][x] est le int qui correspond au char dico[1][x]
2 - on parcourt le nombre a convertir (argv[2]) en partant de la fin (du \0) et on fait des groupes de 3
(pour compter les milliers, millions, etc.)
3 - on traduit chaque groupe de 3 en lettres en partant de la fin
4 - on printe chaque groupe de 3 en lettres, separes par "mille", "millions", "milliards" etc.

#############################################################################################################

REDACTION DE QUELQUES FONCTIONS

void    ft_print_error(void)
{
    write(1, "Error\n", 6);
}

void    ft_print_dict_error(void)
{
    write(1, "Dict Error\n", 11);
}
