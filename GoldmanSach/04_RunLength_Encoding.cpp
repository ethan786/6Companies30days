//Question Link - https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

//Question -Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string. eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″. You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

//Solution-

string encode(string src)
{     
  string s="";
  int c=1;
  char k=src[0];
  
  for(int i=1;i<src.size();i++){
      
      if(src[i] == k){
          c+=1;
      }
      else{
          s+=k;
          s+=to_string(c);
          k=src[i];
          c=1;
      }
      
  }
  
  s+=k;
  s+=to_string(c);
  
  
  
  
  
  
  return s;
 
}  