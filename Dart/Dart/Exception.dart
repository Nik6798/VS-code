 varification(var val){
   
   if(val<0){
     throw("The number must be greater than zero");
   }
   return val;
}

class ex {
  int va;
  ex(var value){
    try {
      this.va=varification(value);
      print(va);
    } catch (e) {
      print(e);
    }
  }
}
main(List<String> args) {
  ex e=ex(-1);
  ex e2=ex(34);
}