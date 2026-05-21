int main()
{
    int A, B, C, D, SC, SA;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    SC = C + D;
    SA = A + B;
    if (B>C && D>A && SA<SC && C>0 && D>0 && A%2==0)
    {
    printf("Valores aceitos\n");
    }
    else {
    printf("Valores nao aceitos\n");
    }

    return 0;
}
