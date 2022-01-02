
struct Books {
    char title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

void printBook( struct Books book );

void printBookPointer( struct Books *book );
