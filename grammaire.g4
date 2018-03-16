grammar grammaire;

programme : (varGlobale)* (definition)+;

instruction : declaration
			| initialisation
			| expr';'
			| bloc
			| structureControle
			| 'break;'
			|'return' expr ';'
			;

varGlobale: declaration
			| initialisation
			;

declaration : 'const' type NAME
			| type NAME';'
			| type NAME'['VAL'];'
			;


initialisation : type NAME '['VAL']' '=' '{'parametreAppel'}'';'
				| type NAME '=' VAL';'
				| 'const' type NAME '=' VAL';'
				;

expr : affectation
	| NAME
	| VAL
	| CHAR
	| NAME'['expr']'
	| NAME'('parametreAppel')'
	| expr '+' expr
	| expr '-' expr
	| expr '*' expr
	| expr '/' expr
	| expr '%' expr
	| expr '!=' expr
	| expr '==' expr
	| expr '>' expr
	| expr '<' expr
	| expr '>=' expr
	| expr '<=' expr
	| expr '&' expr
	| expr '&&' expr
	| expr '||' expr
	| expr '|' expr
	| expr '^' expr
	| '~'expr
	| '!'expr
	;

parametreAppel : (expr',')* expr
			| 'void'
			;

affectation : leftValue '=' expr
			| leftValue '+=' expr
			| leftValue '-=' expr
			| leftValue '*=' expr
			| leftValue '/=' expr
			| leftValue '&=' expr
			| leftValue '|=' expr
			| leftValue '^=' expr
			| leftValue '>>=' expr
			| '++' leftValue
			| '--' leftValue
			| leftValue '++'
			| leftValue '--'
			;

leftValue : NAME
		| NAME'['expr']'
		;

definition : type NAME'('parametreDefinition')' bloc;

bloc : '{' (instruction)* '}';

parametreDefinition : type NAME('['']')? (',' type NAME('['']')?)*
					| type_void 
					;

structureControle : 'if' '('expr')' bloc elseBloc?
				| 'while' '('expr')' bloc
				;

elseBloc : 'else' bloc;

type : 'int32_t'
	|'int64_t'
	|'char';

type_void : 'void';

NAME : ([A-Za-z][0-9_a-zA-Z]*);
VAL : ([0-9]+);
COMMENTAIRE : '/*' .*? '*/';
CHAR : '\''('\\'['"?abfnrtv\\]|.|)'\'';







