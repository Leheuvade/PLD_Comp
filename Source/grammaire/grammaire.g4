grammar grammaire;

entree : programme;

programme : (varGlobale)* (definition)+;


initDecl: declaration #Decl
    | initialisation #Init
	;

instructionStruct :  expr';' #InstExpr
	| blocStruct #Instbloc
	| structureControle #InstStrucControl
	| 'break;' #InstBreak
	|'return' expr ';' #InstReturn
	;

varGlobale: declaration #VarDecl
	| initialisation #VarInit
	;

declaration : 'const' type NAME #DeclConst
	| type NAME';' #DeclVar
	| type NAME'['VAL'];' #DeclTab
	;

initialisation : type NAME '['VAL']' '=' '{'parametreAppel'}'';' #InitTab
	| type NAME '=' VAL ';' #InitVar
	| 'const' type NAME '=' VAL';' #InitConst
	;

expr : affectation #ExprAffect
	| NAME #ExprName
	| VAL #ExprVal
	| CHAR #ExprChar
	| NAME'['expr']' #ExprTab
	| NAME'('parametreAppel')' #ExprFnct
	| expr '+' expr #ExprAdd
	| expr '-' expr #ExprSub
	| expr '*' expr #ExprMult
	| expr '/' expr #ExprDiv
	| expr '%' expr #ExprMod
	| expr '!=' expr #ExprDiff
	| expr '==' expr #ExprEqual
	| expr '>' expr #ExprSup
	| expr '<' expr #ExprInf
	| expr '>=' expr #ExprSupOrEqual
	| expr '<=' expr #ExprInfOrEqual
	| expr '&' expr #ExprAndBit
	| expr '&&' expr #ExprAnd
	| expr '||' expr #ExprOr
	| expr '|' expr #ExprOrBit
	| expr '^' expr #ExprXorBit
	| '~'expr #ExprNoBit
	| '!'expr #ExprNo
	;

parametreAppel : (expr',')* expr;

affectation : leftValue '=' expr #AffectEqual
	| leftValue '+=' expr #AffectPlusEqual
	| leftValue '-=' expr #AffectMinusEqual
	| leftValue '*=' expr #AffectMultEqual
	| leftValue '/=' expr #AffectDivision
	| leftValue '&=' expr #AffectBitwiseAnd
	| leftValue '|=' expr #AffectBitwiseOr
	| leftValue '^=' expr #AffectBitwiseXor
	| leftValue '>>=' expr #AffectBitwiseRightShift
	| '++' leftValue #AffectIncrementationBefore
	| '--' leftValue #AffectDecrementationBefore
	| leftValue '++' #AffectIncrementationAfter
	| leftValue '--' #AffectDecrementationAfter
	;

leftValue : NAME #LeftValueVar
	| NAME'['expr']' #LeftValueTab
	;

definition : type NAME'('parametreDefinition')' bloc #DefFnct
	| type_void NAME'('parametreDefinition')' bloc #DefProc
	;

bloc : '{' (initDecl)* (instructionStruct)* '}';
blocStruct : '{' (instructionStruct)* '}';


parametreDefinition : parametre (',' parametre)* #ParamDefinitionNonVide
	| type_void #ParamDefinitionVide
	;

parametre: type NAME #ParametreSimple
  | type NAME'['']' #ParametreTab
  ;


structureControle : 'if' '('expr')' blocStruct elseBloc? #If
	| 'while' '('expr')' blocStruct #While
;

elseBloc : 'else' blocStruct ;

type : 'int32_t' #Int32
	|'int64_t' #Int64
	|'char' #Char
	;

type_void : 'void';

NAME : ([A-Za-z][0-9_a-zA-Z]*);
VAL : ([0-9]+);
COMMENTAIRE : '/*' .*? '*/';
CHAR : '\''('\\'['"?abfnrtv\\]|.|)'\'';
WS : [ \t\n\r]+ -> skip ;
