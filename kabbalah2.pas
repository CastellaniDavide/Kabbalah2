{ constraints }
const
    MAXN = 1000;

{ input data }
var
    N, M, i : longint;
    mat     : array[0..MAXN-1] of string;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N, M);
    for i:=0 to N-1 do
        readln(mat[i]);

    { insert your code here }

    writeln(4242); { change 4242 with actual answer }
end.
