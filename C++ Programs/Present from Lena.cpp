#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    if(n==2)
    {
        printf("    0\n");
        printf("  0 1 0\n");
        printf("0 1 2 1 0\n");
        printf("  0 1 0\n");
        printf("    0\n");
    }
    else if(n==3)
    {
        printf("      0\n");
        printf("    0 1 0\n");
        printf("  0 1 2 1 0\n");
        printf("0 1 2 3 2 1 0\n");
        printf("  0 1 2 1 0\n");
        printf("    0 1 0\n");
        printf("      0\n");
    }
    else if(n==4)
    {
        printf("        0\n");
        printf("      0 1 0\n");
        printf("    0 1 2 1 0\n");
        printf("  0 1 2 3 2 1 0\n");
        printf("0 1 2 3 4 3 2 1 0\n");
        printf("  0 1 2 3 2 1 0\n");
        printf("    0 1 2 1 0\n");
        printf("      0 1 0\n");
        printf("        0\n");
    }
    else if(n==5)
    {
        printf("          0\n");
        printf("        0 1 0\n");
        printf("      0 1 2 1 0\n");
        printf("    0 1 2 3 2 1 0\n");
        printf("  0 1 2 3 4 3 2 1 0\n");
        printf("0 1 2 3 4 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 3 2 1 0\n");
        printf("    0 1 2 3 2 1 0\n");
        printf("      0 1 2 1 0\n");
        printf("        0 1 0\n");
        printf("          0\n");
    }
    else if(n==6)
    {
        printf("            0\n");
        printf("          0 1 0\n");
        printf("        0 1 2 1 0\n");
        printf("      0 1 2 3 2 1 0\n");
        printf("    0 1 2 3 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 4 3 2 1 0\n");
        printf("0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 3 2 1 0\n");
        printf("      0 1 2 3 2 1 0\n");
        printf("        0 1 2 1 0\n");
        printf("          0 1 0\n");
        printf("            0\n");
    }
    else if(n==7)
    {
        printf("              0\n");
        printf("            0 1 0\n");
        printf("          0 1 2 1 0\n");
        printf("        0 1 2 3 2 1 0\n");
        printf("      0 1 2 3 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 4 3 2 1 0\n");
        printf("      0 1 2 3 4 3 2 1 0\n");
        printf("        0 1 2 3 2 1 0\n");
        printf("          0 1 2 1 0\n");
        printf("            0 1 0\n");
        printf("              0\n");
    }
    else if(n==8)
    {
        printf("                0\n");
        printf("              0 1 0\n");
        printf("            0 1 2 1 0\n");
        printf("          0 1 2 3 2 1 0\n");
        printf("        0 1 2 3 4 3 2 1 0\n");
        printf("      0 1 2 3 4 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("      0 1 2 3 4 5 4 3 2 1 0\n");
        printf("        0 1 2 3 4 3 2 1 0\n");
        printf("          0 1 2 3 2 1 0\n");
        printf("            0 1 2 1 0\n");
        printf("              0 1 0\n");
        printf("                0\n");
    }
    else if(n==9)
    {
        printf("                  0\n");
        printf("                0 1 0\n");
        printf("              0 1 2 1 0\n");
        printf("            0 1 2 3 2 1 0\n");
        printf("          0 1 2 3 4 3 2 1 0\n");
        printf("        0 1 2 3 4 5 4 3 2 1 0\n");
        printf("      0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n");
        printf("0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0\n");
        printf("  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n");
        printf("    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n");
        printf("      0 1 2 3 4 5 6 5 4 3 2 1 0\n");
        printf("        0 1 2 3 4 5 4 3 2 1 0\n");
        printf("          0 1 2 3 4 3 2 1 0\n");
        printf("            0 1 2 3 2 1 0\n");
        printf("              0 1 2 1 0\n");
        printf("                0 1 0\n");
        printf("                  0\n");
    }
    return 0;
}




