#include "Array.hpp"

#define MAX_VAL 750

// int main()
// {
//     Array<int> nb(10);
//     Array<int> bn(10);
//     for (int i = 0; i < 10; i++)
//     {
//         nb = rand();
//         bn = nb;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (nb[i] != bn[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
// }

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// developper une class Array qui contiens des elements de type T
// et se comporte de cette maniere:
// - un constructeur sans parametre: cree un array vite
// - construction avec un unsigned int n en parametre. Cree un Array de n
// element initialiser par defaut.
// Tips: essayer de compiler int * a = new int() ensuite afficher *a
// - Constructeur par copy et operateur d'assignement. Dans les deux cas
// modifier le tableau original ou sa copie apres avoir copier ne devrait pas
// affecter l'autre tableau
// - Vous DEVEZ utiliser l'operateur new[] pour allouer de la memoire.
// L'allocation preventive (l'allocation de memoire en avance) est interdit.
// Votre programme ne doit pas acceder a une zone memoire non allouer
// - Les elements peuvent etre obtenue via l'operateur []
// - Quand tu accede a l'element avec l'operateur [], si sont index est en
// dehors des bornes, je dois throw une exeception
// - Une fonction membre size() qui renvoie le nombre d'element dans le tableau
// cette fonction membre prend aucun parametre et ne doit pas modifier l'instance
