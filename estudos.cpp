#include <iostream>
using namespace std;
int main (void)
{
    // Relação de Euler!
    float V, v, F, f, A, a;
    char resposta;
    cout<<"Relação de Euler!\n\n";
    cout<<"Escreva a inicial do que gostaria de descobrir:\n V = vértice\n F = face\n A = aresta\n\n";
    cin>>resposta;
    switch(resposta)
    {
        case 'V':
        cout<<"\nVocê escolheu descobrir o vértice!\n";
        cout<<"Digite o número de arestas (A):";
        cin>>A;
        cout<<"Digite o número de faces (F):";
        cin>>F;
        cout<<"O número de vértices é:"<<2-F+A;
        break;
        case 'v':
        cout<<"\nVocê escolheu descobrir o vértice!\n";
        cout<<"Digite o número de arestas (A):";
        cin>>A;
        cout<<"Digite o número de faces (F):";
        cin>>F;
        cout<<"O número de vértices é:"<<2-F+A;
        break;
        
        case 'F':
        cout<<"\nVocê escolheu descobrir as faces!\n";
        cout<<"Digite o número de arestas (A):";
        cin>>A;
        cout<<"Digite o número de vértices (V):";
        cin>>V;
        cout<<"O número de faces é:"<<2+A-V;
        break;
        case 'f':
        cout<<"\nVocê escolheu descobrir as faces!\n";
        cout<<"Digite o número de arestas (A):";
        cin>>A;
        cout<<"Digite o número de vértices (V):";
        cin>>V;
        cout<<"O número de faces é:"<<2+A-V;
        break;
        
        case 'A':
        cout<<"\nVocê escolheu descobrir as arestas!\n";
        cout<<"Digite o número de faces (F):";
        cin>>F;
        cout<<"Digite o número de vértices (V):";
        cin>>V;
        cout<<"O número de arestas é:"<<V+F-2;
        break;
        case 'a':
        cout<<"\nVocê escolheu descobrir as arestas!\n";
        cout<<"Digite o número de faces (F):";
        cin>>F;
        cout<<"Digite o número de vértices (V):";
        cin>>V;
        cout<<"O número de arestas é:"<<V+F-2;
        break;
    }
}

// calculando notas anuais 
#include <iostream>
using namespace std;
int main(void)
{
    float N1,N2,N3,M1,M2,M3,S,MF,REC;
    cout << "Digite a N1:";
    cin >> N1;
    cout << "digite a N2:";
    cin >> N2;
    cout << "Digite a N3:";
    cin >> N3;
    M1=(N1+N2+N3)/3;
    cout << "Média 1° trimestre:" << M1;
    cout << endl;
    cout << "Digite a N1:";
    cin >> N1;
    cout << "digite a N2:";
    cin >> N2;
    cout << "Digite a N3:";
    cin >> N3;
    M2=(N1+N2+N3)/3;
    cout << "Média 2° trimestre:" << M2;
    cout << endl;
    cout << "Digite a N1:";
    cin >> N1;
    cout << "digite a N2:";
    cin >> N2;
    cout << "Digite a N3:";
    cin >> N3;
    M3=(N1+N2+N3)/3;
    cout << "Média 3° trimestre:" << M3;
    S=2*M1+2*M2+3*M3;
    MF=S/7;
    cout << endl;
    cout << "Média do ano:" << MF;
    cout << endl;
    if (MF<6)
    {
        cout << "Recuperação";
        cout << endl;
        cout << "digite sua nota de recuperação:";
        cin >> REC;
        if (REC<6)
        {
            cout << "Reprovado!";
        }
        if (REC>6)
        {
            cout << "Aprovado!";
        }
    }
    if (MF>6)
    {
        cout << "Aprovado!!";
    }
}

//calculadora de bhaskara
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
float a, b, c, delta, x1,x2;
cout<<"Digite o valor de 'a':\n";
cin>>a;
cout<<"Digite o valor de 'b':\n";
cin>>b;
cout<<"Digite o valor de 'c':\n";
cin>>c;
delta=pow(b, 2)-4*a*c;
if (delta>0)
  x1=-b+sqrt(delta)/2*a;
  x2=-b-sqrt(delta)/2*a;
  cout<<"O valor de delta é:"<<delta;
  cout<<endl;
  cout<<"Os valores das raízes são:\n";
  cout<<"X1="<<x1;
  cout<<endl;
  cout<<"X2="<<x2;
if (delta<0)
  cout<<"\nEssa raiz é menor do que zero";
}

//colocando idades em conjuntos
#include <iostream>
#include <set>
using namespace std;
int age, cont = 1;
int main() {
set<int> menores, adultos, idosos;
cout << "Digite 5 idades distintas:" << endl;
while (cont <= 5) 
{
cin >> age;
cont++;
if (age < 18) {
menores.insert(age);
} else if (age < 65) {
adultos.insert(age);
} else {
idosos.insert(age);}
}
cout << "Menores: ";
for (auto it = menores.begin(); it != menores.end(); ++it)
cout << *it << ", ";
cout << endl;
cout << "Adultos: ";
for (auto it = adultos.begin(); it != adultos.end(); ++it)
cout << *it << ", ";
cout << endl;
cout << "Idosos: ";
for (auto it = idosos.begin(); it != idosos.end(); ++it)
cout << *it << ",";
cout << endl;
return 0;
}

//Lei de Gauss
#include <iostream>
using namespace std;
int main (void)
{
    char gauss;
    float F, P, p;
    cout << "Lei de Gauss \n";
    cout << "Deseja calcular F, P ou p?";
    cin >> gauss;
    cout << endl;
    switch (gauss)
    {
        case 'F':
        cout << "*Em caso de números decimais utilize ponto!! \n\n";
        cout << "Cálculo do ponto focal! \n";
        cout << "Digite o valor de P:";
        cin >> P;
        cout << "Digite o valor de p:";
        cin >> p;
        F=1/p+1/P;
        cout << "O valor de F é:" << F;
        break;
        
        case 'P':
        cout << "*Em caso de números decimais utilize ponto!! \n\n";
        cout << "Cálculo da distância do objeto! \n";
        cout << "Digite o valor de F:";
        cin >> F;
        cout << "Digite o valor de p:";
        cin >> p;
        P=1/F-1/p;
        cout << "O valor de P é:" << P;
        break;
        
        case 'p':
        cout << "*Em caso de números decimais utilize ponto!! \n\n";
        cout << "Cálculo da distância da imagem! \n";
        cout << "Digite o valor de F:";
        cin >> F;
        cout << "Digite o valor de P:";
        cin >> P;
        p=1/F-1/P;
        cout << "O valor de p é:" << p;
        break;
    } 
}