// Write a C function C int func1(int a[], int n), returning as result the number of all elements divisible by 3. 
// Parameters of the function: a – the array; n – the number of elements in the array.

int func1(int a[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 3 == 0) {
      count++;
    }
  }
  return count;
}

// The node structure represents node for binary search tree. 
// Write C function node * bstfind(node *n, int k), returning as result pointer to the node with key k, NULL if not found

struct node *bstfind(struct node *n, int k) {
  if (n == NULL) {
    return NULL;
  }
  if (k == n->key) {
    return n;
  }
  if (k < n->key) {
    return bstfind(n->left, k);
  } else {
    return bstfind(n->right, k);
  }
}

// int func1(int a[], int n) - find elements with digit 5 for tens, 9 for thousands, n-number of elements in a

int func1(int a[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 10 == 5 || (a[i] / 10) % 10 == 5 || (a[i] / 100) % 10 == 9) {
      count++;
    }
  }
  return count;
}

// float func(item *head) returning as result the ratio of the sum of the even and odd keys of list. 
// The head parameter is pointer to the head of the list.The list is not sorted.

float func(struct item *head) {
  int even_sum = 0, odd_sum = 0;
  struct item *p = head;
  while (p != NULL) {
    if (p->key % 2 == 0) {
      even_sum += p->key;
    } else {
      odd_sum += p->key;
    }
    p = p->next;
  }
  return even_sum / odd_sum;
}

//create two codes that are universal for factorial numbers in c  one with iterative solutions  and one wth recursive
//Iterative :

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
// Recursive:
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// create two codes for fibonacci in language c one iterative solution and one recursive solution
//Iterative:
int fibonacci(int n) {
    int f0 = 0, f1 = 1, fn;
    if (n == 0) {
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return f1;
}
// Recursive:
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//Give an example of a recursive binary search function in C that takes an array of integers and its size as parameters, 
//and returns the index of a given key if it is present in the array, or -1 if the key is not found . 
//Give an iterative and an recursive solution 

//Iterative:
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
//recursive:
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, high, key);
    } else {
        return binarySearch(arr, low, mid - 1, key);
    }
}
