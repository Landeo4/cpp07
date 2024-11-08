#include "Array.hpp"

#define MAX_VAL 750

// Tip: Try to compile int * a = new int(); then display *a.

int main(int, char**)
{
    std::cout << "constrution  without parameters " << std::endl;
    Array<int> nb;
    std::cout << std::endl;

    std::cout << "construction avec valeur: ";
    int *a = new int();
    std::cout << a << std::endl;

    std::cout << std::endl << "test 3 ";
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout << MAX_VAL << " ";
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << "voici tmp " << tmp.size() << " ";
        std::cout << "voici numbers " << numbers.size() << " " << std::endl;
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
    std::cout << "point de controle ===" << std::endl;
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

    delete [] mirror;
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
