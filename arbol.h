#define MAX 80
typedef struct treenode {
  char* usuario;  
  char* contrasena; 

  struct treenode* leftChild;
  struct treenode* rightChild;
  unsigned int depth;
} node;

char linea[MAX], password[MAX], user[MAX];
int saca(); // give the line
void get (char l[MAX],char c[MAX],char u[MAX]); /*  give us the user, password and add people*/
node* insert(char* u, char* c, node* pos, int d); // add user
void alpha(node* position); // order
void delete(node* position, char* u, char* c, int* n); // delete user
/* */