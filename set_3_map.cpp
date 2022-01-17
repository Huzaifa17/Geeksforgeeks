int c=0;
/* Adds a value with key x and value y to the map*/
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
    m[x]=y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  //Your code here
  map<int,int> ::iterator it;
  it=m.find(x);
  if(it==m.end())
  {
      return -1;
  }
  return it->second;
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
   //Your code here
   //int c=0;
   map<int,int> ::iterator it;
   for(it=m.begin();it!=m.end();it++)
   {
       cout<<it->first<<" "<<it->second<<" ";
   }
   //cout<<endl;
}
