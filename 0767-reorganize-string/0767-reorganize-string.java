class Solution
{
    public String reorganizeString(String st) 
    {
        HashMap<Character,Integer>map=new HashMap<Character,Integer>();
        for(int i=0;i<st.length();i++)
        {
            char ch=st.charAt(i);
            if(map.containsKey(ch))
                map.put(ch,map.get(ch)+1);
            else
                map.put(ch,1);
        }
        PriorityQueue<Map.Entry<Character,Integer>>q=new PriorityQueue<Map.Entry<Character,Integer>>((e1,e2)->e2.getValue()-e1.getValue());
        q.addAll(map.entrySet());
        String res="";
        while(q.size()>=2)
        {
            Map.Entry<Character,Integer>f=q.remove();
            Map.Entry<Character,Integer>s=q.remove();
            res+=f.getKey();
            res+=s.getKey();
            int n1=f.getValue()-1;
            int n2=s.getValue()-1;
            f.setValue(n1);
            s.setValue(n2);
            if(n1!=0)
                q.add(f);
            if(n2!=0)
                q.add(s);
        }
        if(q.size()!=0)
        {
            Map.Entry<Character,Integer>e=q.remove();
            res+=e.getKey();
            if((e.getValue()-1)!=0)
                return "";
        }
        return res;
    }
}