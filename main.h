#define MAX 20



typedef struct point {
	int x ;
	int y ;
}point;

typedef enum boolean{
	False,
	True,
}boolean;   // True and false instead of 1 and 0.

typedef enum whatsin{
	road,
	obstacle,
	robot,
	fire,
}whatsin;

typedef struct caracs{
	point p ;
	whatsin whatsin ;
	int deg ; // degree of the fire if there is one. 0 if nothing.

}caracs;

typedef struct node{
	point p ;
	int dist ; //distance of pt from source

}node; // chaque noeud 3ndo coordonées dialo w ch7al b3id men source (pt de départ dial robot)

typedef struct chain{
	node n ;
	struct chain* next ;

}chain;

typedef struct {
	chain * first ;
}Queue;

caracs MAP[MAX][MAX] ; //X can go from 0 to max. Same for Y.
boolean isinrange(int row, int col) ;
Queue *initialise();
void enqueuenode(Queue * queue, node no);
boolean vide(Queue *queue);
void dequeuenode(Queue *queue);
node front(Queue * queue);
point* GetPath(node T[MAX][MAX], point dest);
void BFS(caracs MAP[MAX][MAX], node T[MAX][MAX], point src, point dest) ;
void make_it_way(point p );
void loadTheGuarden(SDL_Surface * jardin ,point fire_location );
void make_it_way(point p );
void send_robot(int dist, point fire_location , SDL_Surface * jardin , point * path);
void Load_MAP();
void shut_down_fire (point fire_position , point robot_location , SDL_Surface * jardin);
point  drone ();
