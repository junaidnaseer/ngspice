/***********************************************************************

 HiSIM (Hiroshima University STARC IGFET Model)
 Copyright (C) 2011 Hiroshima University & STARC

 VERSION : HiSIM_2.5.1 
 FILE : hsm2ext.h

 date : 2011.04.07

 released by 
                Hiroshima University &
                Semiconductor Technology Academic Research Center (STARC)
***********************************************************************/

#ifdef __STDC__
extern int HSM2acLoad(GENmodel *,CKTcircuit*);
extern int HSM2ask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int HSM2convTest(GENmodel *,CKTcircuit*);
extern int HSM2delete(GENmodel*,IFuid,GENinstance**);
extern void HSM2destroy(GENmodel**);
extern int HSM2getic(GENmodel*,CKTcircuit*);
extern int HSM2load(GENmodel*,CKTcircuit*);
extern int HSM2mAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int HSM2mDelete(GENmodel**,IFuid,GENmodel*);
extern int HSM2mParam(int,IFvalue*,GENmodel*);
extern void HSM2mosCap(CKTcircuit*, double, double, double, double*,
        double, double, double, double, double, double,
	double*, double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*, 
        double*);
extern int HSM2param(int,IFvalue*,GENinstance*,IFvalue*);
extern int HSM2pzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int HSM2setup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int HSM2unsetup(GENmodel*,CKTcircuit*);
extern int HSM2temp(GENmodel*,CKTcircuit*);
extern int HSM2trunc(GENmodel*,CKTcircuit*,double*);
extern int HSM2noise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
#else /* stdc */
extern int HSM2acLoad();
extern int HSM2delete();
extern void HSM2destroy();
extern int HSM2getic();
extern int HSM2load();
extern int HSM2mDelete();
extern int HSM2ask();
extern int HSM2mAsk();
extern int HSM2convTest();
extern int HSM2temp();
extern int HSM2mParam();
extern void HSM2mosCap();
extern int HSM2param();
extern int HSM2pzLoad();
extern int HSM2setup();
extern int HSM2unsetup();
extern int HSM2trunc();
extern int HSM2noise();

#endif /* stdc */
