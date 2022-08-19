public static List implementAPI(List logs)
{
HashMap<String,String[]> hm=new HashMap<>();
ArrayList ans=new ArrayList();

int n=logs.size();

for(int i=0;i<n;i++)
{
 String s=logs.get(i);
 String inp[]=s.split(" ");
 String type=inp[0];
 String uname=inp[1];
 String pass= inp.size==3?inp[2]:"";

 if(type.equals("register"))
 {
  if(hm.containsKey("uname"))
  {
   ans.add("Username already exists");
  }
  else
  {
   hm.put(uname, new String[]{pass,"0"});
   ans.add("Registered Successfully");
  }
 }
 else if(type.equals("login"))
 {
  if(!hm.containsKey(uname))
  {
   ans.add("Login Unsuccessful");
  }
  else
  {
   String curr[]=hm.get(uname);

   if(curr[1].equals("1") || !curr[0].equals(pass))
   {
    ans.add("Login Unsuccessful");
   }
   else
   {
    hm.put(uname, new String[]{curr[0],"1"});
    ans.add("Logged In Successfully");
   }
  }
 }
 else if(type.equals("logout"))
 {
  if(!hm.containsKey(uname))
  {
   ans.add("Logout Unsuccessful");
  }
  else
  {
   String curr[]=hm.get(uname);
   if(curr[1].equals("0"))
   {
    ans.add("Logout Unsuccessful");
   }
   else
   {
    String curr[]=hm.get(uname);
    if(curr[1].equals("0"))
    {
     ans.add("Logout Unsuccessful");
    }
    else
    {
     hm.put(uname, new String[]{curr[0],"0"});
     ans.add("Logout Successful");
    }
   }
  }
 }
}
}
