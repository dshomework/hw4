аз╫с╠М Example:

struct Node {
	int linknode;
	int distance;
	struct Node* next;
	Node(int l, int d) {
		linknode = l;
		distance = d;
		next = NULL:
	}
};

struct Edge {
	int label;
	Node* head;
	Edge(int l) {
		label = l;
		head = NULL;
	}
};

Edge* g[10001];


