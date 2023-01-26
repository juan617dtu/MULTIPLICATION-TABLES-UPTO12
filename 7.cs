ConsoleColor foreground = Console.ForegroundColor;
Console.ForegroundColor = ConsoleColor.Green;

int num_getter()
{
    int num;
    bool flag1 = false, val;
   
    do
    {
        Console.Write("\n\nENTER A NUMBER FROM 1 TO 12 (0 TO EXIT): ");
        val = int.TryParse(Console.ReadLine(), out num);
        if (num < 0 || num > 12) { flag1 = true; }
        else if (num == 0 && val) 
        {
            Console.WriteLine("\n\nGOODBYE! :)\n\n");
            System.Environment.Exit(0);
        }
        else {  flag1 = false; }
    
    } while (flag1 == true || val == false);
    
    return num;
}

int global_num, i = 0, j;
string format, format2;
Console.WriteLine("*********************************");
Console.WriteLine("      MULTIPLICATION TABLES      ");
Console.WriteLine("*********************************\n\n");
global_num = num_getter();
Console.WriteLine("\n\n -------------------");
while (i != global_num)
{
    j = i * global_num;
    format = String.Format("{0, -2} {1, -2} {2, -2} {3, -2}", i, " X ", global_num, " = ");
    format2 = String.Format("{0, -3} {1, -3}", j, " |");
    Console.WriteLine("| " + format + format2);
    i++;
}
j = i * global_num;
format = String.Format("{0, -2} {1, -2} {2, -2} {3, -2}", i, " X ", global_num, " = ");
format2 = String.Format("{0, -3} {1, -3}", j, " |");
Console.WriteLine("| " + format + format2);
Console.WriteLine(" -------------------");

return 0;





