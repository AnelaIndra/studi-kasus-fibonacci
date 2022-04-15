
int main(){
  int a;
  Operator run;
  cout << "== FIBONACCI ==";
  cout << "\nMasukkan nilai a = ";
  cin >> a;
  cout << endl;
  cout << "\nFibonacci " << a << "dengan iteratif = " << run.iteratif_fibo(a);
  cout << "\n\n";
  for (int i = 1; i <= a; i++){
    cout << run.rekursif_fibo(i) << " ";
  }
  cout << "\nFibonacci " << a << "dengan rekursif = " << run.rekursif_fibo(a);
}
