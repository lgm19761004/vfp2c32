#INCLUDE vfp2c.h

&& possible type's of a parsenode (PARSENODE.nType)
#DEFINE T_VOID			1
#DEFINE T_CHAR			2
#DEFINE T_WCHAR			3
#DEFINE T_INT8			4
#DEFINE T_SHORT			5
#DEFINE T_INT			6
#DEFINE T_INT64			7
#DEFINE T_LONG			8
#DEFINE T_UNSIGNED		9
#DEFINE T_SIGNED		10
#DEFINE T_FLOAT			11
#DEFINE T_DOUBLE		12
#DEFINE T_STRUCT		13
#DEFINE T_UNION			14
#DEFINE T_ENUM			15
#DEFINE T_TYPENAME		16
#DEFINE T_IDENTIFIER 	17
#DEFINE T_STRUCTDECLARATION	18
#DEFINE T_STRUCTDECLARATOR 	19
#DEFINE T_TYPESPECIFIER 20
#DEFINE T_SUBSCRIPT 	21
#DEFINE T_POINTER 		22
#DEFINE T_CONSTANT 		23
#DEFINE T_DECLARATION 	24
#DEFINE T_DECLARATOR 	25

&& possible type specifier's 
&& raising by a power of 2 to be able to BITOR several values to form a TypeMask
#DEFINE TM_VOID		0x00000001
#DEFINE TM_CHAR		0x00000002
#DEFINE TM_WCHAR	0x00000004
#DEFINE TM_INT8		0x00000008
#DEFINE TM_SHORT	0x00000010
#DEFINE TM_INT		0x00000020
#DEFINE TM_INT64	0x00000040
#DEFINE TM_LONG		0x00000080
#DEFINE TM_FLOAT	0x00000100
#DEFINE TM_DOUBLE	0x00000200
#DEFINE TM_UNSIGNED	0x00000400
#DEFINE TM_SIGNED	0x00000800
#DEFINE TM_BOOL		0x00001000
#DEFINE TM_ARRAYOF	0x00002000
#DEFINE TM_TYPENAME 0x00004000
#DEFINE TM_STRUCT	0x00008000
#DEFINE TM_ENUM		0x00010000
#DEFINE TM_BYTE		0x00020000

&& possible types of a typenode (TYPENODE.nType)
#DEFINE TT_BASICTYPE	1 
#DEFINE TT_TYPEDEF		2 
#DEFINE TT_STRUCTHEADER	3 
#DEFINE TT_UNIONHEADER	4 
#DEFINE TT_ENUMHEADER	5 
#DEFINE TT_POINTERTO	6
#DEFINE TT_ARRAYOF		7
#DEFINE TT_STRUCTREF	8

#DEFINE INVALIDTYPESPEC "Invalid type specifier combination detected"
#DEFINE TYPENOTFOUND	"Type not found"

#DEFINE OFFSET1 CHR(9)
#DEFINE OFFSET2 REPLICATE(CHR(9),2)
#DEFINE OFFSET3 REPLICATE(CHR(9),3)
#DEFINE OFFSET4 REPLICATE(CHR(9),4)
#DEFINE OFFSET5 REPLICATE(CHR(9),5)