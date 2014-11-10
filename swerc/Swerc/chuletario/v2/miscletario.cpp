#include <vector>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

//mascaras de bits
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)

//Arbol de segmentos. Permite buscar el minimo elemento de un array LEERLO
// Segment Tree Library: The segment tree is stored like a heap array
void st_build(vi &st, const vi &A, int vertex, int L, int R) {
  if (L == R)                              // as L == R, either one is fine
    st[vertex] = L;                                      // store the index
  else {   // recursively compute the values in the left and right subtrees
    int nL = 2 * vertex, nR = 2 * vertex + 1;
    st_build(st, A, nL, L              , (L + R) / 2);
    st_build(st, A, nR, (L + R) / 2 + 1, R          );
    int lContent = st[nL]     , rContent = st[nR];
    int lValue   = A[lContent], rValue   = A[rContent];
    st[vertex] = (lValue <= rValue) ? lContent : rContent;
} }

void st_create(vi &st, const vi &A) {       // if original array size is N,
     // the required segment tree array length is 2*2^(floor(log2(N)) + 1);
  int len = (int)(2*pow(2.0, floor((log((double)A.size())/log(2.0)) + 1)));
  st.assign(len, 0); // create vector of size `len' and fill it with zeroes
  st_build(st, A, 1, 0, (int)A.size() - 1);              // recursive build
}

int st_rmq(vi &st, const vi &A, int vertex, int L, int R, int i, int j) {
  if (i >  R || j <  L) return -1;   // current segment outside query range
  if (L >= i && R <= j) return st[vertex];            // inside query range

     // compute the min position in the left and right part of the interval
  int p1 = st_rmq(st, A, 2 * vertex    , L              , (L+R) / 2, i, j);
  int p2 = st_rmq(st, A, 2 * vertex + 1, (L+R) / 2 + 1, R          , i, j);

                        // return the position where the overall minimum is
  if (p1 == -1) return p2;     // if we try to access segment outside query
  if (p2 == -1) return p1;                                 // same as above
  return (A[p1] <= A[p2]) ? p1 : p2; }

int st_rmq(vi &st, const vi& A, int i, int j) {     // function overloading
  return st_rmq(st, A, 1, 0, (int)A.size() - 1, i, j); }

int st_update_point(vi &st, vi &A, int node, int b, int e, int idx, int new_value) {
  // this update code is still preliminary, i == j
  // must be able to update range in the future!
  int i = idx, j = idx;

  // if the current interval does not intersect 
  // the update interval, return this st node value!
  if (i > e || j < b)
    return st[node];

  // if the current interval is included in the update range,
  // update that st[node]
  if (b == i && e == j) {
    A[i] = new_value; // update the underlying array
    return st[node] = b; // this index
  }

  // compute the minimum position in the 
  // left and right part of the interval
  int p1, p2;
  p1 = st_update_point(st, A, 2 * node    , b              , (b + e) / 2, idx, new_value);
  p2 = st_update_point(st, A, 2 * node + 1, (b + e) / 2 + 1, e          , idx, new_value);

  // return the position where the overall minimum is
  return st[node] = (A[p1] <= A[p2]) ? p1 : p2;
}

int st_update_point(vi &st, vi &A, int idx, int new_value) {
  return st_update_point(st, A, 1, 0, (int)A.size() - 1, idx, new_value); }

//Arbol de Fenwick. Permite resolver el problema de la suma en un rango
//con actualizaciones. (RSQ(a,b)=suma de los a[i], i entre a y b)
// initialization: n + 1 zeroes, ignoring index 0, just using index [1..n]
void ft_create(vi &ft, int n) { ft.assign(n + 1, 0); }

int ft_rsq(const vi &ft, int b) {                      // returns RSQ(1, b)
  int sum = 0; for (; b; b -= LSOne(b)) sum += ft[b];
  return sum; }

int ft_rsq(const vi &ft, int a, int b) {               // returns RSQ(a, b)
  return ft_rsq(ft, b) - (a == 1 ? 0 : ft_rsq(ft, a - 1)); }

// adjusts value of the k-th element by v (v can be +ve/inc or -ve/dec)
void ft_adjust(vi &ft, int k, int v) {           // note: n = ft.size() - 1
  for (; k < (int)ft.size(); k += LSOne(k)) ft[k] += v; }

//Backtracking
Funcion Backtracking (Etapai) devuelve: boolean 
Inicio 
	Éxito = falso; 
	IniciarOpciones(i, GrupoOpciones o); 
	Repetir 
		SeleccionarnuevaOpcion(o, Opcion n); 
		Si (Aceptable(n)) entonces 
			AnotarOpcion(i, n); 
			SiSolucionCompleta(i) entonces 
				Éxito = verdadero; 
			Sino
				Éxito = Backtracking(i+1); 
				Si Éxito = false entonces 
					cancelamosAnotacion(i, n); 
				finsi; 
			Finsi; 
		Finsi; 
	Hasta (éxito = verdadero) o (NoQuedanOpciones(o)); 
	Retorna Éxito; 
Fin;
