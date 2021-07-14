#include<cstdio> // AC
#include<vector>
 
 
using namespace std;
 
 
typedef vector < int > VI;
 
 
#define REP(i,a,b,skok) for(int i=a; i<=b; i+=skok)
 
#define PB push_back
 
 
const int MAX_N = 1000000, ZAKRES = 1000;
 
 
VI v;
 
bool czy[MAX_N+1];
 
int q, n, r = 0, wyn[113] = { 2, 3, 5, 7, 11, 101, 131, 151, 181, 191, 313, 353, 373, 383, 727, 757, 787, 797, 919, 929, 10301, 10501, 10601, 11311, 11411, 12421, 12721, 12821, 13331, 13831, 13931, 14341, 14741, 15451, 15551, 16061, 16361, 16561, 16661, 17471, 17971, 18181, 18481, 19391, 19891, 19991, 30103, 30203, 30403, 30703, 30803, 31013, 31513, 32323, 32423, 33533, 34543, 34843, 35053, 35153, 35353, 35753, 36263, 36563, 37273, 37573, 38083, 38183, 38783, 39293, 70207, 70507, 70607, 71317, 71917, 72227, 72727, 73037, 73237, 73637, 74047, 74747, 75557, 76367, 76667, 77377, 77477, 77977, 78487, 78787, 78887, 79397, 79697, 79997, 90709, 91019, 93139, 93239, 93739, 94049, 94349, 94649, 94849, 94949, 95959, 96269, 96469, 96769, 97379, 97579, 97879, 98389, 98689 }, iloczyn[113] = { 2, 3, 5, 7, 1, 1, 3, 5, 8, 9, 9, 45, 63, 72, 98, 245, 392, 441, 81, 162, 3, 5, 6, 3, 4, 16, 28, 32, 27, 72, 81, 48, 112, 100, 125, 36, 108, 180, 216, 196, 441, 64, 256, 243, 648, 729, 9, 18, 36, 63, 72, 9, 45, 108, 144, 405, 720, 1152, 225, 225, 675, 1575, 648, 1620, 882, 2205, 576, 576, 4032, 1458, 98, 245, 294, 147, 441, 392, 1372, 441, 882, 2646, 784, 5488, 6125, 5292, 10584, 7203, 9604, 21609, 12544, 21952, 25088, 11907, 23814, 35721, 567, 81, 729, 1458, 5103, 1296, 3888, 7776, 10368, 11664, 18225, 5832, 11664, 20412, 11907, 19845, 31752, 15552, 31104 };
 
 
void preprocessing()
{
	czy[0] = czy[1] = false;
	
	REP(i,2,MAX_N,1)
	{
		czy[i] = true;
	}
	
	REP(i,2,ZAKRES,1)
	{
		if( czy[i] )
		{
			REP(j,i*i,MAX_N,i)
			{
				czy[j] = false;
			}
		}
	}
	
	REP(i,2,MAX_N,1)
	{
		if( czy[i] )
		{
			v.PB( i );
			
			++r;
		}
	}
}
 
 
void obsluz_zapytania()
{
	scanf( "%d", &q );
	
	while( q )
	{
		scanf( "%d", &n );
		
		printf( "%d %d\n", wyn[ n - 1 ], v[ iloczyn[ n - 1 ] - 1 ] );
		
		--q;
	}
}
 
 
int main()
{
	preprocessing();
	
	obsluz_zapytania();
	
	return 0;
} 