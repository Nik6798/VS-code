//FIXME  not complete yet
struct bstnode
{
    int data;
    bstnode* left;// if i am using c then i have to mention stuct everytime when i use structure
    bstnode* right;
};
bstnode* getnewNode(int data){
    bstnode* newnode=new bstnode();
    newnode->data=data;
    //*newnode.data=data; i can also use this 
    newnode->left=newnode->right=nullptr;
    return newnode;
}
void Insert(bstnode* root,int data){
    
}
int main(){
    bstnode* root=nullptr;
    Insert(root,10);
    Insert(root,20);
    Insert(root,16);

}
