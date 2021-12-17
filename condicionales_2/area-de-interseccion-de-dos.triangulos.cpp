#include <bits/stdc++.h>
using namespace std;
int main(){
long long i,j,cont=1,N,aux,x,y;
long long ejex[4],ejey[4];
long long orgx[4],orgy[4];
for (i=0;i<4;i++) {
    cin>>ejex[i]>>ejey[i];
    orgx[i] = ejex[i];
    orgy[i] = ejey[i];}
N = 2;
while (cont>0) {
    cont = 0;
    for (i=0;i<4-N;i++) {
    if (orgx[i]>orgx[i+N]) {
        aux = orgx[i];
        orgx[i] = orgx[i+N];
        orgx[i+N] = aux;
        cont++;}}
    N=N/2;}
N = 2;
cont = 1;
while (cont>0) {
    cont = 0;
    for (i=0;i<4-N;i++) {
    if (orgy[i]>orgy[i+N]) {
        aux = orgy[i];
        orgy[i] = orgy[i+N];
        orgy[i+N] = aux;
        cont++;}}
    N=N/2;}
x = orgx[2] - orgx[1];
y = orgy[2] - orgy[1];
if (orgx[0]==ejex[0] && orgx[1]==ejex[1] && orgx[2]==ejex[2] && orgx[3]==ejex[3]) {
    x = 0;}
if (orgx[0]==ejex[2] && orgx[1]==ejex[3] && orgx[2]==ejex[0] && orgx[3]==ejex[1]) {
    x = 0;}
if (orgy[0]==ejey[0] && orgy[1]==ejey[1] && orgy[2]==ejey[2] && orgy[3]==ejey[3]) {
    y = 0;}
if (orgy[0]==ejey[2] && orgy[1]==ejey[3] && orgy[2]==ejey[0] && orgy[3]==ejey[1]) {
    y = 0;}
if (x*y<0) {
    cout<<x*y*-1;}
else {
    cout<<x*y;
}
return 0;
}
