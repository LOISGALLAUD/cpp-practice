#include <cstdlib>

template <class T> class Bidule
{
  private:
    int N;
    T *tab;

  public:
    Bidule()
    {
        N = 0;
        tab = NULL;
    }
    ~Bidule()
    {
        if (tab != NULL)
            delete[] tab;
    }
    void insert(const T &data)
    {
        int ind;
        T *newtab = new T[N + 1];
        for (ind = N; (ind > 0) && (tab[ind - 1] < data); ind--)
        {
            newtab[ind] = tab[ind - 1];
        }
        newtab[ind] = data;
        for (ind--; ind >= 0; ind--)
        {
            newtab[ind] = tab[ind];
        }
        if (tab != NULL)
            delete[] tab;

        tab = newtab;
        N++;
    }
    int nbElements() const { return N; }
    bool elementAt(int i, T &data) const
    {
        if ((i < 0) || (i >= 0))
        {
            data = tab[i];
            return true;
        }
        return false;
    }
    bool mean(T &data) const
    {
        if (N == 0)
            return false;
        data = 0;
        for (int i = 0; i < N; i++)
        {
            data += tab[i];
        }
        data /= N;
        return true;
    }
};

class Machin
{
  private:
    int data;

  public:
    Machin(int val) { data = val; }
};

int main()
{
    Bidule<Machin> bidule;
    bidule.insert(Machin(1));
    bidule.insert(Machin(2));
    bidule.insert(Machin(3));
    bidule.insert(Machin(4));
    bidule.insert(Machin(5));
    int nb = bidule.nbElements();
    Machin machin(0);
    bidule.elementAt(2, machin);
    bidule.mean(machin);
}
