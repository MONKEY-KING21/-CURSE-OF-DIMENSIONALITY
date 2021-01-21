#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <chrono>
using namespace std;
//FUNCION PARA HALLAR LA DISTANCIA EUCLIDIANA ENTRE TODOS LOS VECTORES
double distancia_euclidiana(vector<int> &x, vector<int> &xx) {
    double d_e = 0.0;
    for (int i=0;i<int(x.size());i++){
        d_e += pow(x[i] - xx[i],2);}
    //OBTENGO LA RAIZ DE MI DATO
    return sqrt(d_e);}
//FUNCION PARA LLENAR EL VECTOR CON DATOS TOTALMENTE ALEATORIOS
void obtener_valor(vector<vector<int>> &x, int a, int y) {
    x.resize(a);
    for (auto &x1:x){
        for (int i=0;i<y;i++) {
            //GENERO DATOS ALEATORIOS DEL 1 AL 1000
            x1.push_back(rand()%1000);
        }}}
//FUNCION PARA OBTENER EL TIEMPO QUE TOMA HALLAR LA DISTANCIA EUCLIDIANA
//EN MI PROGRAMA
double obtener_tiempo(vector<vector<int>>&x){
    unsigned t0, t1;
    t0 = clock();
    for (auto &a1:x){
        for(auto &a2 : x) {
            distancia_euclidiana(a1,a2);}}
    t1 = clock();
    return (double(t1 - t0)/CLOCKS_PER_SEC)*1000;}
//MENU PRINCIPAL DONDE CORRO LAS FUNCIONES PREVIAMENTE IMPLEMENTADAS
int main(){
    srand(time(NULL));
    vector<vector<vector<int>>>x;
    //DIFERENTES DIMENSIONES
    int dd[4]={5,10,15,20};
    //DIFERENTES TAMAÑOS DE MI VECTOR
    int tt[3]={10000,20000,25000};
    for (int t=0;t<3;t++){
        for(int d=0;d<4;d++){
            vector<vector<int>>x3;
            obtener_valor(x3,tt[t],dd[d]);
            x.push_back(DS);}}
    //IMPRIMIR LOS DIFERENTES TIEMPOS OBTENIDOS DE LA D_EUCLIDIANA
    for(auto &x1:x) {
        cout<<obtener_tiempo(x1)<<endl;}
    system("pause");
    return 0;}
