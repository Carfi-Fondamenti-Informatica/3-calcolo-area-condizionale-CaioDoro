int main(){
    float a,b, At, Aq, Ar;
    int i;
    cin >> a >> b >> i ;
    switch (i) {
        case 0:
            At= (a*b)/2;
            cout << At;
            break;
        case 1:
            Aq=a*a;
            cout << Aq;
            break;
        case 2:
            Ar=a*b;
            cout << Ar;
            break;
        default:
            cout << "opzione non valida";

    }
    return 0;

}
