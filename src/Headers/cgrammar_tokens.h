/*
** Inserted at beginning of c files generated by bison
** REMEMBER:  Change bison.reset too.
*/

/*@-allmacros@*/
/*@+boolint@*/
/*@+charint@*/
/*@-macroparams@*/
/*@-macroundef@*/
/*@-unreachable@*/
/*@-macrospec@*/
/*@-varuse@*/
/*@+ignorequals@*/
/*@-macrostmt@*/
/*@-noeffect@*/
/*@-shadow@*/
/*@-exitarg@*/
/*@-macroredef@*/
/*@-uniondef@*/
/*@-compdef@*/
/*@-matchfields@*/
/*@-exportlocal@*/
/*@-evalorderuncon@*/
/*@-exportheader@*/
/*@-typeuse@*/
/*@-redecl@*/
/*@-redef@*/
/*@-noparams@*/
/*@-ansireserved@*/
/*@-fielduse@*/
/*@-ifblock@*/
/*@-elseifcomplete@*/
/*@-whileblock@*/
/*@-forblock@*/
/*@-branchstate@*/
/*@-readonlytrans@*/
/*@-namechecks@*/
/*@-usedef@*/
/*@-systemunrecog@*/
/*@-dependenttrans@*/
/*@-unqualifiedtrans@*/
/*@-nullassign@*/
/*@-nullpass@*/
/*@-nullptrarith*/
/*@-usereleased@*/
/*@-declundef@*/

/*drl added 11/27/2001*/
/*@-bounds@*/

/*drl added 12/11/2002*/
/*@-type@*/

/*@-enummemuse@*/

/* < end of bison.head > */

/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BADTOK = 258,
     SKIPTOK = 259,
     CTOK_ELIPSIS = 260,
     CASE = 261,
     DEFAULT = 262,
     CIF = 263,
     CELSE = 264,
     SWITCH = 265,
     WHILE = 266,
     DO = 267,
     CFOR = 268,
     GOTO = 269,
     CONTINUE = 270,
     BREAK = 271,
     RETURN = 272,
     TSEMI = 273,
     TLBRACE = 274,
     TRBRACE = 275,
     TCOMMA = 276,
     TCOLON = 277,
     TASSIGN = 278,
     TLPAREN = 279,
     TRPAREN = 280,
     TLSQBR = 281,
     TRSQBR = 282,
     TDOT = 283,
     TAMPERSAND = 284,
     TEXCL = 285,
     TTILDE = 286,
     TMINUS = 287,
     TPLUS = 288,
     TMULT = 289,
     TDIV = 290,
     TPERCENT = 291,
     TLT = 292,
     TGT = 293,
     TCIRC = 294,
     TBAR = 295,
     TQUEST = 296,
     CSIZEOF = 297,
     CALIGNOF = 298,
     CTYPEOF = 299,
     ARROW_OP = 300,
     CTYPEDEF = 301,
     COFFSETOF = 302,
     INC_OP = 303,
     DEC_OP = 304,
     LEFT_OP = 305,
     RIGHT_OP = 306,
     LE_OP = 307,
     GE_OP = 308,
     EQ_OP = 309,
     NE_OP = 310,
     AND_OP = 311,
     OR_OP = 312,
     MUL_ASSIGN = 313,
     DIV_ASSIGN = 314,
     MOD_ASSIGN = 315,
     ADD_ASSIGN = 316,
     SUB_ASSIGN = 317,
     LEFT_ASSIGN = 318,
     RIGHT_ASSIGN = 319,
     AND_ASSIGN = 320,
     XOR_ASSIGN = 321,
     OR_ASSIGN = 322,
     CSTRUCT = 323,
     CUNION = 324,
     CENUM = 325,
     VA_ARG = 326,
     VA_DCL = 327,
     QWARN = 328,
     QGLOBALS = 329,
     QMODIFIES = 330,
     QNOMODS = 331,
     QCONSTANT = 332,
     QFUNCTION = 333,
     QITER = 334,
     QDEFINES = 335,
     QUSES = 336,
     QALLOCATES = 337,
     QSETS = 338,
     QRELEASES = 339,
     QPRECLAUSE = 340,
     QPOSTCLAUSE = 341,
     QINVARIANT = 342,
     QALT = 343,
     QUNDEF = 344,
     QKILLED = 345,
     QENDMACRO = 346,
     LLMACRO = 347,
     LLMACROITER = 348,
     LLMACROEND = 349,
     TENDMACRO = 350,
     QDREVEALSTATE = 351,
     QSWITCHBREAK = 352,
     QLOOPBREAK = 353,
     QINNERBREAK = 354,
     QSAFEBREAK = 355,
     QINNERCONTINUE = 356,
     QFALLTHROUGH = 357,
     QLINTNOTREACHED = 358,
     QLINTFALLTHROUGH = 359,
     QLINTFALLTHRU = 360,
     QARGSUSED = 361,
     QPRINTFLIKE = 362,
     QLINTPRINTFLIKE = 363,
     QSCANFLIKE = 364,
     QMESSAGELIKE = 365,
     QNOTREACHED = 366,
     QCONST = 367,
     QRESTRICT = 368,
     QVOLATILE = 369,
     QINLINE = 370,
     QEXTENSION = 371,
     QEXTERN = 372,
     QSTATIC = 373,
     QAUTO = 374,
     QREGISTER = 375,
     QOUT = 376,
     QIN = 377,
     QYIELD = 378,
     QONLY = 379,
     QTEMP = 380,
     QSHARED = 381,
     QREF = 382,
     QUNIQUE = 383,
     QCHECKED = 384,
     QUNCHECKED = 385,
     QCHECKEDSTRICT = 386,
     QCHECKMOD = 387,
     QKEEP = 388,
     QKEPT = 389,
     QPARTIAL = 390,
     QSPECIAL = 391,
     QOWNED = 392,
     QDEPENDENT = 393,
     QRETURNED = 394,
     QEXPOSED = 395,
     QNULL = 396,
     QOBSERVER = 397,
     QISNULL = 398,
     QEXITS = 399,
     QMAYEXIT = 400,
     QNEVEREXIT = 401,
     QTRUEEXIT = 402,
     QFALSEEXIT = 403,
     QLONG = 404,
     QSIGNED = 405,
     QUNSIGNED = 406,
     QSHORT = 407,
     QUNUSED = 408,
     QSEF = 409,
     QNOTNULL = 410,
     QRELNULL = 411,
     QABSTRACT = 412,
     QNUMABSTRACT = 413,
     QCONCRETE = 414,
     QMUTABLE = 415,
     QIMMUTABLE = 416,
     QTRUENULL = 417,
     QFALSENULL = 418,
     QEXTERNAL = 419,
     QREFCOUNTED = 420,
     QREFS = 421,
     QNEWREF = 422,
     QTEMPREF = 423,
     QKILLREF = 424,
     QRELDEF = 425,
     CGCHAR = 426,
     CBOOL = 427,
     CINT = 428,
     CGFLOAT = 429,
     CDOUBLE = 430,
     CVOID = 431,
     QANYTYPE = 432,
     QINTEGRALTYPE = 433,
     QUNSIGNEDINTEGRALTYPE = 434,
     QSIGNEDINTEGRALTYPE = 435,
     QNULLTERMINATED = 436,
     QSETBUFFERSIZE = 437,
     QSETSTRINGLENGTH = 438,
     QMAXSET = 439,
     QMAXREAD = 440,
     QTESTINRANGE = 441,
     TCAND = 442,
     IDENTIFIER = 443,
     NEW_IDENTIFIER = 444,
     TYPE_NAME_OR_ID = 445,
     CANNOTATION = 446,
     CCONSTANT = 447,
     ITER_NAME = 448,
     ITER_ENDNAME = 449,
     TYPE_NAME = 450,
     METASTATE_NAME = 451
   };
#endif
/* Tokens.  */
#define BADTOK 258
#define SKIPTOK 259
#define CTOK_ELIPSIS 260
#define CASE 261
#define DEFAULT 262
#define CIF 263
#define CELSE 264
#define SWITCH 265
#define WHILE 266
#define DO 267
#define CFOR 268
#define GOTO 269
#define CONTINUE 270
#define BREAK 271
#define RETURN 272
#define TSEMI 273
#define TLBRACE 274
#define TRBRACE 275
#define TCOMMA 276
#define TCOLON 277
#define TASSIGN 278
#define TLPAREN 279
#define TRPAREN 280
#define TLSQBR 281
#define TRSQBR 282
#define TDOT 283
#define TAMPERSAND 284
#define TEXCL 285
#define TTILDE 286
#define TMINUS 287
#define TPLUS 288
#define TMULT 289
#define TDIV 290
#define TPERCENT 291
#define TLT 292
#define TGT 293
#define TCIRC 294
#define TBAR 295
#define TQUEST 296
#define CSIZEOF 297
#define CALIGNOF 298
#define CTYPEOF 299
#define ARROW_OP 300
#define CTYPEDEF 301
#define COFFSETOF 302
#define INC_OP 303
#define DEC_OP 304
#define LEFT_OP 305
#define RIGHT_OP 306
#define LE_OP 307
#define GE_OP 308
#define EQ_OP 309
#define NE_OP 310
#define AND_OP 311
#define OR_OP 312
#define MUL_ASSIGN 313
#define DIV_ASSIGN 314
#define MOD_ASSIGN 315
#define ADD_ASSIGN 316
#define SUB_ASSIGN 317
#define LEFT_ASSIGN 318
#define RIGHT_ASSIGN 319
#define AND_ASSIGN 320
#define XOR_ASSIGN 321
#define OR_ASSIGN 322
#define CSTRUCT 323
#define CUNION 324
#define CENUM 325
#define VA_ARG 326
#define VA_DCL 327
#define QWARN 328
#define QGLOBALS 329
#define QMODIFIES 330
#define QNOMODS 331
#define QCONSTANT 332
#define QFUNCTION 333
#define QITER 334
#define QDEFINES 335
#define QUSES 336
#define QALLOCATES 337
#define QSETS 338
#define QRELEASES 339
#define QPRECLAUSE 340
#define QPOSTCLAUSE 341
#define QINVARIANT 342
#define QALT 343
#define QUNDEF 344
#define QKILLED 345
#define QENDMACRO 346
#define LLMACRO 347
#define LLMACROITER 348
#define LLMACROEND 349
#define TENDMACRO 350
#define QDREVEALSTATE 351
#define QSWITCHBREAK 352
#define QLOOPBREAK 353
#define QINNERBREAK 354
#define QSAFEBREAK 355
#define QINNERCONTINUE 356
#define QFALLTHROUGH 357
#define QLINTNOTREACHED 358
#define QLINTFALLTHROUGH 359
#define QLINTFALLTHRU 360
#define QARGSUSED 361
#define QPRINTFLIKE 362
#define QLINTPRINTFLIKE 363
#define QSCANFLIKE 364
#define QMESSAGELIKE 365
#define QNOTREACHED 366
#define QCONST 367
#define QRESTRICT 368
#define QVOLATILE 369
#define QINLINE 370
#define QEXTENSION 371
#define QEXTERN 372
#define QSTATIC 373
#define QAUTO 374
#define QREGISTER 375
#define QOUT 376
#define QIN 377
#define QYIELD 378
#define QONLY 379
#define QTEMP 380
#define QSHARED 381
#define QREF 382
#define QUNIQUE 383
#define QCHECKED 384
#define QUNCHECKED 385
#define QCHECKEDSTRICT 386
#define QCHECKMOD 387
#define QKEEP 388
#define QKEPT 389
#define QPARTIAL 390
#define QSPECIAL 391
#define QOWNED 392
#define QDEPENDENT 393
#define QRETURNED 394
#define QEXPOSED 395
#define QNULL 396
#define QOBSERVER 397
#define QISNULL 398
#define QEXITS 399
#define QMAYEXIT 400
#define QNEVEREXIT 401
#define QTRUEEXIT 402
#define QFALSEEXIT 403
#define QLONG 404
#define QSIGNED 405
#define QUNSIGNED 406
#define QSHORT 407
#define QUNUSED 408
#define QSEF 409
#define QNOTNULL 410
#define QRELNULL 411
#define QABSTRACT 412
#define QNUMABSTRACT 413
#define QCONCRETE 414
#define QMUTABLE 415
#define QIMMUTABLE 416
#define QTRUENULL 417
#define QFALSENULL 418
#define QEXTERNAL 419
#define QREFCOUNTED 420
#define QREFS 421
#define QNEWREF 422
#define QTEMPREF 423
#define QKILLREF 424
#define QRELDEF 425
#define CGCHAR 426
#define CBOOL 427
#define CINT 428
#define CGFLOAT 429
#define CDOUBLE 430
#define CVOID 431
#define QANYTYPE 432
#define QINTEGRALTYPE 433
#define QUNSIGNEDINTEGRALTYPE 434
#define QSIGNEDINTEGRALTYPE 435
#define QNULLTERMINATED 436
#define QSETBUFFERSIZE 437
#define QSETSTRINGLENGTH 438
#define QMAXSET 439
#define QMAXREAD 440
#define QTESTINRANGE 441
#define TCAND 442
#define IDENTIFIER 443
#define NEW_IDENTIFIER 444
#define TYPE_NAME_OR_ID 445
#define CANNOTATION 446
#define CCONSTANT 447
#define ITER_NAME 448
#define ITER_ENDNAME 449
#define TYPE_NAME 450
#define METASTATE_NAME 451




#if ! defined cgrammar_YYSTYPE && ! defined cgrammar_YYSTYPE_IS_DECLARED
typedef union cgrammar_YYSTYPE

{
  lltok tok;
  int count;
  qual typequal;
  qualList tquallist;
  ctype ctyp;
  /*@dependent@*/ sRef sr;
  /*@only@*/ sRef osr;

  /*@only@*/ functionClauseList funcclauselist;
  /*@only@*/ functionClause funcclause;  
  /*@only@*/ flagSpec flagspec;
  /*@only@*/ globalsClause globsclause;
  /*@only@*/ modifiesClause modsclause;
  /*@only@*/ warnClause warnclause;
  /*@only@*/ stateClause stateclause;
  /*@only@*/ pointers pointers;
  /*@only@*/ functionConstraint fcnconstraint; 

  /*@only@*/ metaStateConstraint msconstraint;
  /*@only@*/ metaStateSpecifier msspec;
  /*@only@*/ metaStateExpression msexpr;
  /*@observer@*/ metaStateInfo msinfo;

  /*@only@*/ sRefList srlist;
  /*@only@*/ globSet globset;
  /*@only@*/ qtype qtyp;
  /*@only@*/ cstring cname;
  /*@observer@*/ annotationInfo annotation;
  /*@only@*/ idDecl ntyp;
  /*@only@*/ idDeclList ntyplist;
  /*@only@*/ uentryList flist;
  /*@owned@*/ uentryList entrylist;
  /*@observer@*/ /*@dependent@*/ uentry entry;
  /*@only@*/ uentry oentry;
  /*@only@*/ exprNode expr;
  /*@only@*/ enumNameList enumnamelist;
  /*@only@*/ exprNodeList exprlist;
  /*@only@*/ sRefSet srset; 
  /*@only@*/ cstringList cstringlist;

  /*drl
    added 1/19/2001
  */
  constraint con;
  constraintList conL;
  constraintExpr conE;
  /* drl */  
}
/* Line 1529 of yacc.c.  */

	cgrammar_YYSTYPE;
# define yystype cgrammar_YYSTYPE /* obsolescent; will be withdrawn */
# define cgrammar_YYSTYPE_IS_DECLARED 1
# define cgrammar_YYSTYPE_IS_TRIVIAL 1
#endif

extern cgrammar_YYSTYPE yylval;

/*
** Resets all flags in bison.head
*/


/*@=allmacros@*/
/*@=boolint@*/
/*@=charint@*/
/*@=macroparams@*/
/*@=macroundef@*/
/*@=unreachable@*/
/*@=macrospec@*/
/*@=varuse@*/
/*@=ignorequals@*/
/*@=macrostmt@*/
/*@=noeffect@*/
/*@=shadow@*/
/*@=exitarg@*/
/*@=macroredef@*/
/*@=uniondef@*/
/*@=compdef@*/
/*@=matchfields@*/
/*@=exportlocal@*/
/*@=evalorderuncon@*/
/*@=exportheader@*/
/*@=typeuse@*/
/*@=redecl@*/
/*@=redef@*/
/*@=noparams@*/
/*@=ansireserved@*/
/*@=fielduse@*/
/*@=ifblock@*/
/*@=elseifcomplete@*/
/*@=whileblock@*/
/*@=forblock@*/
/*@=branchstate@*/
/*@=readonlytrans@*/
/*@=namechecks@*/
/*@=usedef@*/
/*@=systemunrecog@*/
/*@=dependenttrans@*/
/*@=unqualifiedtrans@*/
/*@=declundef@*/


/*drl added 11/27/2001*/
/*@=bounds@*/

/*drl added 12/11/2002*/
/*@=type@*/

/*@=enummemuse@*/
