&( ... )

$ hbrun hello.prg

Hello, world!
  
Nil: NIL
String: "hello", 'hello', [hello]
Date: 0d20100405
Logical: .T., .F.
Numeric: 1, 1.1, −1, 0xFF
Complex Types may also be represent as literal values:

Array: { "String", 1, { "Nested Array" }, .T., FunctionCall(), @FunctionPointer() }
CodeBlock: { |Arg1, ArgN| Arg1 := ArgN + OuterVar + FunctionCall() }
Hash: { "Name" => "John", 1 => "Numeric key", "Name2" => { "Nested" => "Hash" } }

