
/*
  ȡ���ģ�
  
  n����û������ȡ��ֻ��ȡna[i]�е�����
  ���ȡ���������˻�ʤ
*/

import java.util.*;

public class A
{
	static int[] na = new int[3];  // ����������Ŀ������
	static Map buf = new HashMap();
	
	
	// false=��������
	static int pan(boolean me, boolean you)
	{
		if(me==true && you==false) return -1;
		if(me==false && you==true) return 1;
		return 0;
	}
	
	// n ��ʣ����
	// me, you �������������ż��
	// -1 �䣬0 ƽ�֣� 1 Ӯ
	static int f(int n, boolean me, boolean you)
	{
		if(n<na[0]) return pan(me, you);
	
		String key = "" + n + me + you;
		if(buf.get(key) != null) return (Integer)buf.get(key);
	
		boolean ping = false;
		
		for(int v: na){
			if(n>=v){
				int t = f(n-v, you, v%2==0? me : !me);
				if(t<0) {
					buf.put(key, 1);
					return 1;
				}
				if(t==0) ping = true;
			}
		}

		if(ping){ 
			buf.put(key, 0);
			return 0;
		}
		buf.put(key, -1);
		return -1;
	}
	
	public static void main(String[] args)
	{
		Map map = new HashMap();
		map.put(1,"+");
		map.put(0,"0");
		map.put(-1,"-");
		
		Scanner scan = new Scanner(System.in);
		String[] ss = scan.nextLine().split(" ");
		na[0] = Integer.parseInt(ss[0]);
		na[1] = Integer.parseInt(ss[1]);
		na[2] = Integer.parseInt(ss[2]);
		
		ss = scan.nextLine().split(" ");
		int[] a = new int[5];
		for(int i=0; i<a.length; i++){
			a[i] = Integer.parseInt(ss[i]);
			System.out.print( map.get(f(a[i], true, true)) + " ");
		}
		System.out.println();
		
		
		/*
		for(int i=0; i<30; i++){
			int k = i * 2 + 1;
			System.out.println(k + " --> " + f(k,true,true));
		}
		*/
	}
}