{ %norun }
uses
  math;
var
  drec : record
    d1,d2 : dword;
  end;
  i,j : longint;
  s : string;
  d : double absolute drec;
begin
  randomize;
  SetExceptionMask([exInvalidOp,exDenormalized,exZeroDivide,exOverflow,exUnderflow,exPrecision]);
  writeln('{ Generated by FPC ',{$I %FPCVERSION%},' using tgenstr.pp }');
  writeln('uses math; procedure c(d : double;const s : string);');
  writeln('var hs : string;begin str(d:22,hs); if hs<>s then begin writeln(''expected: "'',s,''", got: "'',hs,''"''); halt(1); end; end;');
  for j:=1 to 1 do
    begin
      writeln('procedure p',j,'; begin');
      for i:=1 to 5000 do
        begin
          drec.d1:=random(4294967296);
          drec.d2:=random(4294967296);
          str(d:22,s);
          writeln('c(',d,',''',s,''');');
        end;
      writeln('end;');
      writeln;
    end;
  writeln('begin');
  writeln('SetExceptionMask([exInvalidOp,exDenormalized,exZeroDivide,exOverflow,exUnderflow,exPrecision]);');
  for j:=1 to 1 do
    writeln('p',j,';');
  writeln('writeln(''ok'');');
  writeln('end.');
end.
