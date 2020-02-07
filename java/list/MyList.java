package	list;

import java.util.LinkedList;
import java.util.List;

public class MyList{
	public static void main(String[] args){
		List ls = new LinkedList();
		ls.add(15);
		ls.add(0, "list");

		System.out.println(ls.get(0));
		System.out.println(ls.isEmpty());

		List<List<>> l = new LinkedList();
		List l2 = new LinkedList();
		l2.add(1);
		l2.add(2);
		l2.add("holi");

		l.add(l2);
		l.add(l2);

		System.out.println(l.get(0));
	}
}
