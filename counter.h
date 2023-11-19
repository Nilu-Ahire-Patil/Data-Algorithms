unsigned long int MaxMem = 0L;
unsigned long int Mem = 0L;
unsigned long int count = 0L;

void im()
{
    Mem++;
    if(MaxMem<Mem)
        MaxMem = Mem;
}

void inm(int i)
{
    Mem += i;
    if(MaxMem < Mem)
        MaxMem = Mem;
}

void rm()
{
    Mem = 0;
}

void rmax()
{
    MaxMem = 0;
}

void dm()
{
    Mem--;
}
void dnm(int i)
{
    Mem -= i;
}

void ic()
{
    count++;
}

void inc(int i)
{
    count += i;
}

void dc()
{
    count--;
}

void dnc(int i)
{
    count -= i;
}

void rc()
{
    count = 0;
}

long int getCount()
{
    return count;
}

long int getMaxMem()
{
    return MaxMem;
}

long int getMem()
{
    return Mem;
}

void resetAllCount()
{
    rc();
    rm();
    rmax();
}
