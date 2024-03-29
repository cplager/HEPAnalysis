//
// File generated by /cdf/code/cdfsoft/products/root/v5_22_00j-GCC_3_4_6/Linux+2.6/bin/rootcint at Sun Nov  7 18:30:21 2010

// Do NOT change. Changes will be lost next time file is generated
//

#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "dict_CLPBin.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void CLPBin_ShowMembers(void *obj, TMemberInspector &R__insp, char *R__parent);
   static void *new_CLPBin(void *p = 0);
   static void *newArray_CLPBin(Long_t size, void *p);
   static void delete_CLPBin(void *p);
   static void deleteArray_CLPBin(void *p);
   static void destruct_CLPBin(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CLPBin*)
   {
      ::CLPBin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CLPBin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CLPBin", ::CLPBin::Class_Version(), "interface/CLPBin.h", 11,
                  typeid(::CLPBin), DefineBehavior(ptr, ptr),
                  &::CLPBin::Dictionary, isa_proxy, 0,
                  sizeof(::CLPBin) );
      instance.SetNew(&new_CLPBin);
      instance.SetNewArray(&newArray_CLPBin);
      instance.SetDelete(&delete_CLPBin);
      instance.SetDeleteArray(&deleteArray_CLPBin);
      instance.SetDestructor(&destruct_CLPBin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CLPBin*)
   {
      return GenerateInitInstanceLocal((::CLPBin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CLPBin*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
TClass *CLPBin::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *CLPBin::Class_Name()
{
   return "CLPBin";
}

//______________________________________________________________________________
const char *CLPBin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CLPBin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CLPBin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CLPBin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void CLPBin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CLPBin*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *CLPBin::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CLPBin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void CLPBin::Streamer(TBuffer &R__b)
{
   // Stream an object of class CLPBin.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> m_xUpper;
      R__b >> m_xWidth;
      R__b >> m_y;
      R__b >> m_sameAsLastBin;
      R__b.CheckByteCount(R__s, R__c, CLPBin::IsA());
   } else {
      R__c = R__b.WriteVersion(CLPBin::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << m_xUpper;
      R__b << m_xWidth;
      R__b << m_y;
      R__b << m_sameAsLastBin;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void CLPBin::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
      // Inspect the data members of an object of class CLPBin.
      TClass *R__cl = ::CLPBin::IsA();
      Int_t R__ncp = strlen(R__parent);
      if (R__ncp || R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__parent, "m_xUpper", &m_xUpper);
      R__insp.Inspect(R__cl, R__parent, "m_xWidth", &m_xWidth);
      R__insp.Inspect(R__cl, R__parent, "m_y", &m_y);
      R__insp.Inspect(R__cl, R__parent, "m_sameAsLastBin", &m_sameAsLastBin);
      TObject::ShowMembers(R__insp, R__parent);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CLPBin(void *p) {
      return  p ? new(p) ::CLPBin : new ::CLPBin;
   }
   static void *newArray_CLPBin(Long_t nElements, void *p) {
      return p ? new(p) ::CLPBin[nElements] : new ::CLPBin[nElements];
   }
   // Wrapper around operator delete
   static void delete_CLPBin(void *p) {
      delete ((::CLPBin*)p);
   }
   static void deleteArray_CLPBin(void *p) {
      delete [] ((::CLPBin*)p);
   }
   static void destruct_CLPBin(void *p) {
      typedef ::CLPBin current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CLPBin

/********************************************************
* objects/dict_CLPBin.C
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && (__GNUC__ > 3) && (__GNUC_MINOR__ > 1)
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtabledict_CLPBin();

extern "C" void G__set_cpp_environmentdict_CLPBin() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("CLPBin.h");
  G__cpp_reset_tagtabledict_CLPBin();
}
#include <new>
extern "C" int G__cpp_dllrevdict_CLPBin() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* CLPBin */
static int G__dict_CLPBin_199_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   CLPBin* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new CLPBin[n];
     } else {
       p = new((void*) gvp) CLPBin[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new CLPBin;
     } else {
       p = new((void*) gvp) CLPBin;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   CLPBin* p = NULL;
   char* gvp = (char*) G__getgvp();
   switch (libp->paran) {
   case 4:
     //m: 4
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new CLPBin(
(double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (double) G__double(libp->para[2]), (bool) G__int(libp->para[3]));
     } else {
       p = new((void*) gvp) CLPBin(
(double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (double) G__double(libp->para[2]), (bool) G__int(libp->para[3]));
     }
     break;
   case 3:
     //m: 3
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new CLPBin(
(double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (double) G__double(libp->para[2]));
     } else {
       p = new((void*) gvp) CLPBin(
(double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (double) G__double(libp->para[2]));
     }
     break;
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((CLPBin*) G__getstructoffset())->setXLowerWidth((double) G__double(libp->para[0]), (double) G__double(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((CLPBin*) G__getstructoffset())->setXUpperWidth((double) G__double(libp->para[0]), (double) G__double(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((CLPBin*) G__getstructoffset())->setYvalue((double) G__double(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 1:
      ((CLPBin*) G__getstructoffset())->setSameAsLastBin((bool) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   case 0:
      ((CLPBin*) G__getstructoffset())->setSameAsLastBin();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((const CLPBin*) G__getstructoffset())->xUpper());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((const CLPBin*) G__getstructoffset())->xMiddle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((const CLPBin*) G__getstructoffset())->xLower());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((const CLPBin*) G__getstructoffset())->xWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((const CLPBin*) G__getstructoffset())->yValue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) ((const CLPBin*) G__getstructoffset())->isSameAsLastBin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) CLPBin::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) CLPBin::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) CLPBin::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      CLPBin::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_20(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((CLPBin*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_21(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) CLPBin::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_22(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) CLPBin::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_23(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) CLPBin::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__dict_CLPBin_199_0_24(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) CLPBin::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__dict_CLPBin_199_0_25(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   CLPBin* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new CLPBin(*(CLPBin*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef CLPBin G__TCLPBin;
static int G__dict_CLPBin_199_0_26(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (CLPBin*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((CLPBin*) (soff+(sizeof(CLPBin)*i)))->~G__TCLPBin();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (CLPBin*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((CLPBin*) (soff))->~G__TCLPBin();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__dict_CLPBin_199_0_27(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   CLPBin* dest = (CLPBin*) G__getstructoffset();
   *dest = *(CLPBin*) libp->para[0].ref;
   const CLPBin& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* CLPBin */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncdict_CLPBin {
 public:
  G__Sizep2memfuncdict_CLPBin(): p(&G__Sizep2memfuncdict_CLPBin::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncdict_CLPBin::*p)();
};

size_t G__get_sizep2memfuncdict_CLPBin()
{
  G__Sizep2memfuncdict_CLPBin a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritancedict_CLPBin() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin))) {
     CLPBin *G__Lderived;
     G__Lderived=(CLPBin*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin),G__get_linked_tagnum(&G__dict_CLPBinLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetabledict_CLPBin() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<TSchemaHelper>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<UInt_t>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TString>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlETStringcOallocatorlETStringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlETStringcOallocatorlETStringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlETStringcOallocatorlETStringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<CLPBin>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_reverse_iteratorlEvectorlECLPBincOallocatorlECLPBingRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__dict_CLPBinLN_reverse_iteratorlEvectorlECLPBincOallocatorlECLPBingRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Vec",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR),0,G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("VecIter",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgRcLcLiterator),0,G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("VecConstIter",117,G__get_linked_tagnum(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgRcLcLiterator),0,G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* CLPBin */
static void G__setup_memvarCLPBin(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   { CLPBin *p; p=(CLPBin*)0x1000; if (p) { }
   G__memvar_setup((void*)0,100,0,0,-1,-1,-1,4,"m_xUpper=",0,(char*)NULL);
   G__memvar_setup((void*)0,100,0,0,-1,-1,-1,4,"m_xWidth=",0,(char*)NULL);
   G__memvar_setup((void*)0,100,0,0,-1,-1,-1,4,"m_y=",0,(char*)NULL);
   G__memvar_setup((void*)0,103,0,0,-1,-1,-1,4,"m_sameAsLastBin=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__dict_CLPBinLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvardict_CLPBin() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncCLPBin(void) {
   /* CLPBin */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin));
   G__memfunc_setup("CLPBin",504,G__dict_CLPBin_199_0_1, 105, G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("CLPBin",504,G__dict_CLPBin_199_0_2, 105, G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin), -1, 0, 4, 1, 1, 0, 
"d - - 0 - xLower d - - 0 - xWidth "
"d - - 0 - yValue g - - 0 'false' sameAs", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setXLowerWidth",1453,G__dict_CLPBin_199_0_3, 121, -1, -1, 0, 2, 1, 1, 0, 
"d - - 0 - xlower d - - 0 - width", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setXUpperWidth",1456,G__dict_CLPBin_199_0_4, 121, -1, -1, 0, 2, 1, 1, 0, 
"d - - 0 - xupper d - - 0 - width", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setYvalue",962,G__dict_CLPBin_199_0_5, 121, -1, -1, 0, 1, 1, 1, 0, "d - - 0 - yvalue", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setSameAsLastBin",1587,G__dict_CLPBin_199_0_6, 121, -1, -1, 0, 1, 1, 1, 0, "g - - 0 'true' sameAs", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("xUpper",644,G__dict_CLPBin_199_0_7, 100, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("xMiddle",711,G__dict_CLPBin_199_0_8, 100, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("xLower",641,G__dict_CLPBin_199_0_9, 100, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("xWidth",632,G__dict_CLPBin_199_0_10, 100, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("yValue",630,G__dict_CLPBin_199_0_11, 100, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("isSameAsLastBin",1475,G__dict_CLPBin_199_0_12, 103, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__dict_CLPBin_199_0_13, 85, G__get_linked_tagnum(&G__dict_CLPBinLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) (TClass* (*)())(&CLPBin::Class), 0);
   G__memfunc_setup("Class_Name",982,G__dict_CLPBin_199_0_14, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) (const char* (*)())(&CLPBin::Class_Name), 0);
   G__memfunc_setup("Class_Version",1339,G__dict_CLPBin_199_0_15, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) (Version_t (*)())(&CLPBin::Class_Version), 0);
   G__memfunc_setup("Dictionary",1046,G__dict_CLPBin_199_0_16, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) (void (*)())(&CLPBin::Dictionary), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__dict_CLPBinLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 2, 1, 1, 0, 
"u 'TMemberInspector' - 1 - insp C - - 0 - parent", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - b", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__dict_CLPBin_199_0_20, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__dict_CLPBin_199_0_21, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) (const char* (*)())(&CLPBin::DeclFileName), 0);
   G__memfunc_setup("ImplFileLine",1178,G__dict_CLPBin_199_0_22, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) (int (*)())(&CLPBin::ImplFileLine), 0);
   G__memfunc_setup("ImplFileName",1171,G__dict_CLPBin_199_0_23, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) (const char* (*)())(&CLPBin::ImplFileName), 0);
   G__memfunc_setup("DeclFileLine",1152,G__dict_CLPBin_199_0_24, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) (int (*)())(&CLPBin::DeclFileLine), 0);
   // automatic copy constructor
   G__memfunc_setup("CLPBin", 504, G__dict_CLPBin_199_0_25, (int) ('i'), G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin), -1, 0, 1, 1, 1, 0, "u 'CLPBin' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~CLPBin", 630, G__dict_CLPBin_199_0_26, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__dict_CLPBin_199_0_27, (int) ('u'), G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin), -1, 1, 1, 1, 1, 0, "u 'CLPBin' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncdict_CLPBin() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globaldict_CLPBin() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcdict_CLPBin() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__dict_CLPBinLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR = { "vector<unsigned int,allocator<unsigned int> >" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_vectorlETStringcOallocatorlETStringgRsPgR = { "vector<TString,allocator<TString> >" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TString,allocator<TString> >::iterator>" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_CLPBin = { "CLPBin" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR = { "vector<CLPBin,allocator<CLPBin> >" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgRcLcLiterator = { "vector<CLPBin,allocator<CLPBin> >::iterator" , 99 , -1 };
G__linked_taginfo G__dict_CLPBinLN_reverse_iteratorlEvectorlECLPBincOallocatorlECLPBingRsPgRcLcLiteratorgR = { "reverse_iterator<vector<CLPBin,allocator<CLPBin> >::iterator>" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtabledict_CLPBin() {
  G__dict_CLPBinLN_TClass.tagnum = -1 ;
  G__dict_CLPBinLN_TBuffer.tagnum = -1 ;
  G__dict_CLPBinLN_TMemberInspector.tagnum = -1 ;
  G__dict_CLPBinLN_TObject.tagnum = -1 ;
  G__dict_CLPBinLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR.tagnum = -1 ;
  G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__dict_CLPBinLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__dict_CLPBinLN_vectorlETStringcOallocatorlETStringgRsPgR.tagnum = -1 ;
  G__dict_CLPBinLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__dict_CLPBinLN_CLPBin.tagnum = -1 ;
  G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR.tagnum = -1 ;
  G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgRcLcLiterator.tagnum = -1 ;
  G__dict_CLPBinLN_reverse_iteratorlEvectorlECLPBincOallocatorlECLPBingRsPgRcLcLiteratorgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtabledict_CLPBin() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_TClass);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_TObject);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_vectorlETStringcOallocatorlETStringgRsPgR);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum(&G__dict_CLPBinLN_CLPBin),sizeof(CLPBin),-1,61696,"CLPBin Class",G__setup_memvarCLPBin,G__setup_memfuncCLPBin);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgR);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_vectorlECLPBincOallocatorlECLPBingRsPgRcLcLiterator);
   G__get_linked_tagnum_fwd(&G__dict_CLPBinLN_reverse_iteratorlEvectorlECLPBincOallocatorlECLPBingRsPgRcLcLiteratorgR);
}
extern "C" void G__cpp_setupdict_CLPBin(void) {
  G__check_setup_version(30051515,"G__cpp_setupdict_CLPBin()");
  G__set_cpp_environmentdict_CLPBin();
  G__cpp_setup_tagtabledict_CLPBin();

  G__cpp_setup_inheritancedict_CLPBin();

  G__cpp_setup_typetabledict_CLPBin();

  G__cpp_setup_memvardict_CLPBin();

  G__cpp_setup_memfuncdict_CLPBin();
  G__cpp_setup_globaldict_CLPBin();
  G__cpp_setup_funcdict_CLPBin();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncdict_CLPBin();
  return;
}
class G__cpp_setup_initdict_CLPBin {
  public:
    G__cpp_setup_initdict_CLPBin() { G__add_setup_func("dict_CLPBin",(G__incsetup)(&G__cpp_setupdict_CLPBin)); G__call_setup_funcs(); }
   ~G__cpp_setup_initdict_CLPBin() { G__remove_setup_func("dict_CLPBin"); }
};
G__cpp_setup_initdict_CLPBin G__cpp_setup_initializerdict_CLPBin;

