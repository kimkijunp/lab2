#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
	char name[100];
	int midtermScore;
	int finalScore;
	struct Student* left;
	struct Student* right;

} Student;


Student* createNode(char name[], int midtermScore, int finalScore) {
	Student* newNode = (Student*)malloc(sizeof(Student));
	strcpy(newNode->name, name);
	newNode->midtermScore = midtermScore;
	newNode->finalScore = finalScore;	
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

Student* insert(Student* root, char name[], int midtermScore, int finalScore) {
	if (root == NULL) {
		return createNode(name, midtermScore, finalScore);
	}

	if (strcmp(name, root->name) < 0) {
		root->left = insert(root->left, name, midtermScore, finalScore);
	} else if (strcmp(name, root->name) > 0) {
		root->right = insert(root->right, name, midtermScore, finalScore);
	}

	return root;
}

void inorderTraversal(Student* root) {
	if (root != NULL) {
		inorderTraversal(root->left);
		printf("Name: %s, Midterm Score: %d, Final Score: %d\n", root->name, root->midtermScore, root->finalScore);
		inorderTraversal(root->right);
	}
}

void deallocateTree(Student* root) {
	if (root != NULL) {
		deallocateTree(root->left);
		deallocateTree(root->right);
		free(root);
	}
}

int main() {
	int numStudents;
	printf("Enter the number of students: ");
	scanf("%d", &numStudents);
	Student* root = NULL;

	for (int i = 0; i < numStudents; i++) {
		char name[100];
		int midtermScore, finalScore;
	
		printf("Enter name of student %d: ", i + 1);
		scanf("%s", name);

		printf("Enter midterm score for %s: ", name);
		scanf("%d", &midtermScore);

		printf("Enter final score for %s: ", name);
		scanf("%d", &finalScore);

		root = insert(root, name, midtermScore, finalScore);
	
	}


	printf("\nStudent Information (Inorder Traversal):\n");
	inorderTraversal(root);
	deallocateTree(root);

	return 0;
}

