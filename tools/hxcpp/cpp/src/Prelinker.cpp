// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Compiler
#include <Compiler.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Log
#include <Log.h>
#endif
#ifndef INCLUDED_PathManager
#include <PathManager.h>
#endif
#ifndef INCLUDED_Prelinker
#include <Prelinker.h>
#endif
#ifndef INCLUDED_ProcessManager
#include <ProcessManager.h>
#endif
#ifndef INCLUDED_Target
#include <Target.h>
#endif
#ifndef INCLUDED_Tools
#include <Tools.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0425ac42af08693_13_new,"Prelinker","new",0xa92fdd1c,"Prelinker.new","Prelinker.hx",13,0x592739d4)
HX_LOCAL_STACK_FRAME(_hx_pos_e0425ac42af08693_23_isOutOfDate,"Prelinker","isOutOfDate",0xee538d85,"Prelinker.isOutOfDate","Prelinker.hx",23,0x592739d4)
HX_LOCAL_STACK_FRAME(_hx_pos_e0425ac42af08693_42_prelink,"Prelinker","prelink",0x8a65e059,"Prelinker.prelink","Prelinker.hx",42,0x592739d4)

void Prelinker_obj::__construct(::String inExe){
            	HX_STACKFRAME(&_hx_pos_e0425ac42af08693_13_new)
HXLINE(  14)		this->mFlags = ::Array_obj< ::String >::__new(0);
HXLINE(  15)		this->mOutFlag = HX_("-o",a2,27,00,00);
HXLINE(  16)		this->mExe = inExe;
HXLINE(  17)		this->mExpandArchives = false;
HXLINE(  19)		this->mFromFile = HX_("@",40,00,00,00);
            	}

Dynamic Prelinker_obj::__CreateEmpty() { return new Prelinker_obj; }

void *Prelinker_obj::_hx_vtable = 0;

Dynamic Prelinker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Prelinker_obj > _hx_result = new Prelinker_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Prelinker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bc7d46a;
}

bool Prelinker_obj::isOutOfDate(::String inName,::Array< ::String > inObjs){
            	HX_STACKFRAME(&_hx_pos_e0425ac42af08693_23_isOutOfDate)
HXLINE(  24)		if (!(::sys::FileSystem_obj::exists(inName))) {
HXLINE(  25)			return true;
            		}
HXLINE(  26)		Float stamp = ( ( ::Date)(::sys::FileSystem_obj::stat(inName)->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
HXLINE(  27)		{
HXLINE(  27)			int _g = 0;
HXDLIN(  27)			while((_g < inObjs->length)){
HXLINE(  27)				::String obj = inObjs->__get(_g);
HXDLIN(  27)				_g = (_g + 1);
HXLINE(  29)				if (!(::sys::FileSystem_obj::exists(obj))) {
HXLINE(  31)					::Log_obj::error(((((HX_("Could not find \"",c7,12,67,a6) + obj) + HX_("\" required by \"",7c,1f,a2,f2)) + inName) + HX_("\"",22,00,00,00)),null(),null(),null());
            				}
HXLINE(  34)				Float obj_stamp = ( ( ::Date)(::sys::FileSystem_obj::stat(obj)->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) )->getTime();
HXLINE(  35)				if ((obj_stamp > stamp)) {
HXLINE(  36)					return true;
            				}
            			}
            		}
HXLINE(  38)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Prelinker_obj,isOutOfDate,return )

::String Prelinker_obj::prelink( ::Target inTarget,::Array< ::String > inObjs, ::Compiler inCompiler){
            	HX_STACKFRAME(&_hx_pos_e0425ac42af08693_42_prelink)
HXLINE(  43)		::String file_name = HX_("prelink.o",5e,4f,b1,16);
HXLINE(  45)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  47)			::PathManager_obj::mkdir(inTarget->mOutputDir,null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  49)				{
HXLINE(  49)					null();
            				}
HXLINE(  51)				::Log_obj::error(((HX_("Unable to create output directory \"",7c,d3,2b,f1) + inTarget->mOutputDir) + HX_("\"",22,00,00,00)),null(),null(),null());
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  55)		::String out_name = ((inCompiler->mObjDir + HX_("/",2f,00,00,00)) + file_name);
HXLINE(  57)		bool _hx_tmp;
HXDLIN(  57)		if (!(this->isOutOfDate(out_name,inObjs))) {
HXLINE(  57)			_hx_tmp = this->isOutOfDate(out_name,inTarget->mDepends);
            		}
            		else {
HXLINE(  57)			_hx_tmp = true;
            		}
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  59)			::Array< ::String > args = ::Array_obj< ::String >::__new();
HXLINE(  60)			::String out = this->mOutFlag;
HXLINE(  61)			if ((out.substr(-1,null()) == HX_(" ",20,00,00,00))) {
HXLINE(  63)				args->push(out.substr(0,(out.length - 1)));
HXLINE(  64)				out = HX_("",00,00,00,00);
            			}
HXLINE(  67)			args->push((out + out_name));
HXLINE(  69)			args = args->concat(this->mFlags);
HXLINE(  71)			::Array< ::String > objs = inObjs->copy();
HXLINE(  96)			if ((this->mFromFile == HX_("@",40,00,00,00))) {
HXLINE(  98)				::String fname = (inCompiler->mObjDir + HX_("/all_objs",e9,1a,c3,1c));
HXLINE(  99)				 ::sys::io::FileOutput fout = ::sys::io::File_obj::write(fname,false);
HXLINE( 100)				{
HXLINE( 100)					int _g1 = 0;
HXDLIN( 100)					while((_g1 < objs->length)){
HXLINE( 100)						::String obj = objs->__get(_g1);
HXDLIN( 100)						_g1 = (_g1 + 1);
HXLINE( 101)						fout->writeString((obj + HX_("\n",0a,00,00,00)),null());
            					}
            				}
HXLINE( 102)				fout->close();
HXLINE( 103)				args->push((HX_("@",40,00,00,00) + fname));
            			}
            			else {
HXLINE( 106)				args = args->concat(objs);
            			}
HXLINE( 110)			int result = ::ProcessManager_obj::runCommand(HX_("",00,00,00,00),this->mExe,args,null(),null(),null(),null());
HXLINE( 111)			if ((result != 0)) {
HXLINE( 113)				::Tools_obj::exit(result);
            			}
HXLINE( 117)			return out_name;
            		}
HXLINE( 120)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Prelinker_obj,prelink,return )


::hx::ObjectPtr< Prelinker_obj > Prelinker_obj::__new(::String inExe) {
	::hx::ObjectPtr< Prelinker_obj > __this = new Prelinker_obj();
	__this->__construct(inExe);
	return __this;
}

::hx::ObjectPtr< Prelinker_obj > Prelinker_obj::__alloc(::hx::Ctx *_hx_ctx,::String inExe) {
	Prelinker_obj *__this = (Prelinker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Prelinker_obj), true, "Prelinker"));
	*(void **)__this = Prelinker_obj::_hx_vtable;
	__this->__construct(inExe);
	return __this;
}

Prelinker_obj::Prelinker_obj()
{
}

void Prelinker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Prelinker);
	HX_MARK_MEMBER_NAME(mExe,"mExe");
	HX_MARK_MEMBER_NAME(mFlags,"mFlags");
	HX_MARK_MEMBER_NAME(mOutFlag,"mOutFlag");
	HX_MARK_MEMBER_NAME(mFromFile,"mFromFile");
	HX_MARK_MEMBER_NAME(mExpandArchives,"mExpandArchives");
	HX_MARK_END_CLASS();
}

void Prelinker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mExe,"mExe");
	HX_VISIT_MEMBER_NAME(mFlags,"mFlags");
	HX_VISIT_MEMBER_NAME(mOutFlag,"mOutFlag");
	HX_VISIT_MEMBER_NAME(mFromFile,"mFromFile");
	HX_VISIT_MEMBER_NAME(mExpandArchives,"mExpandArchives");
}

::hx::Val Prelinker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExe") ) { return ::hx::Val( mExe ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFlags") ) { return ::hx::Val( mFlags ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prelink") ) { return ::hx::Val( prelink_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mOutFlag") ) { return ::hx::Val( mOutFlag ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mFromFile") ) { return ::hx::Val( mFromFile ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isOutOfDate") ) { return ::hx::Val( isOutOfDate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mExpandArchives") ) { return ::hx::Val( mExpandArchives ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Prelinker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExe") ) { mExe=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFlags") ) { mFlags=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mOutFlag") ) { mOutFlag=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mFromFile") ) { mFromFile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mExpandArchives") ) { mExpandArchives=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Prelinker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mExe",25,06,41,48));
	outFields->push(HX_("mFlags",9a,ef,9f,2a));
	outFields->push(HX_("mOutFlag",6d,f6,6d,f0));
	outFields->push(HX_("mFromFile",93,0e,03,4c));
	outFields->push(HX_("mExpandArchives",38,a4,88,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Prelinker_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Prelinker_obj,mExe),HX_("mExe",25,06,41,48)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Prelinker_obj,mFlags),HX_("mFlags",9a,ef,9f,2a)},
	{::hx::fsString,(int)offsetof(Prelinker_obj,mOutFlag),HX_("mOutFlag",6d,f6,6d,f0)},
	{::hx::fsString,(int)offsetof(Prelinker_obj,mFromFile),HX_("mFromFile",93,0e,03,4c)},
	{::hx::fsBool,(int)offsetof(Prelinker_obj,mExpandArchives),HX_("mExpandArchives",38,a4,88,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Prelinker_obj_sStaticStorageInfo = 0;
#endif

static ::String Prelinker_obj_sMemberFields[] = {
	HX_("mExe",25,06,41,48),
	HX_("mFlags",9a,ef,9f,2a),
	HX_("mOutFlag",6d,f6,6d,f0),
	HX_("mFromFile",93,0e,03,4c),
	HX_("mExpandArchives",38,a4,88,ff),
	HX_("isOutOfDate",c9,64,42,cf),
	HX_("prelink",9d,c5,3e,35),
	::String(null()) };

::hx::Class Prelinker_obj::__mClass;

void Prelinker_obj::__register()
{
	Prelinker_obj _hx_dummy;
	Prelinker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Prelinker",2a,5f,84,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Prelinker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Prelinker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Prelinker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Prelinker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

