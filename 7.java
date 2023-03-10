import java.text.NumberFormat;
import java.text.ParsePosition;
import java.util.Scanner;

public class Main {
	
	public static final String ANSI_GREEN = "\u001B[32m";
	public static final String ANSI_RESET = "\u001B[0m";
	public static final String ANSI_BLACK_BG = "\u001B[40m";
	static Scanner readLine = new Scanner(System.in);
	
	
	public static int numGetter() {
		
		String data; double num = 0; boolean flag1 = true;
		
		do {
			System.out.print("\n\nENTER A NUMBER FROM 1 TO 12 (0 TO EXIT): ");
			data = readLine.nextLine();
			data = data.trim();
			if (numCheck(data)) {
				num = Double.parseDouble(data);
				flag1 = false;
				if (num == 0) {
					System.out.println("\n\nGOODBYE! :)\n");
					System.exit(0);
				}
			}
		} while (flag1 == true);
		
		return (int)num;
	}
	
	public static boolean numCheck(String str) {
		
		ParsePosition pos = new ParsePosition(0);
		NumberFormat.getInstance().parse(str, pos);
		return str.length() == pos.getIndex();
	}

	public static void main(String[] args) {
		
		System.out.println("*********************************");
		System.out.println("      MULTIPLICATION TABLES      ");
		System.out.println("*********************************\n");
		
		int number = numGetter();
		
		System.out.println("\n\n -------------------");
		
		int i = 0, j;
		String strTable, strTable2;
		while (i != number) {
			j = i * number;
			strTable = String.format("%-2d %-2s %-2d %-2s", i, " X ", number, " = ");
			strTable2 = String.format("%-3d %-3s", j, " |");
			System.out.println("| " + strTable + strTable2);
			i++;
		}
		j = i * number;
		strTable = String.format("%-2d %-2s %-2d %-2s", i, " X ", number, " = ");
		strTable2 = String.format("%-3d %-3s", j, " |");
		System.out.println("| " + strTable + strTable2);
		System.out.println(" -------------------");
	}
}
