// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_File
#include <File.h>
#endif
#ifndef INCLUDED_FileGroup
#include <FileGroup.h>
#endif
#ifndef INCLUDED_Log
#include <Log.h>
#endif
#ifndef INCLUDED_PathManager
#include <PathManager.h>
#endif
#ifndef INCLUDED_Target
#include <Target.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_25_new,"Target","new",0x84c414e3,"Target.new","Target.hx",25,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_47_merge,"Target","merge",0xba334dfb,"Target.merge","Target.hx",47,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_60_toString,"Target","toString",0x43485149,"Target.toString","Target.hx",60,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_64_getExt,"Target","getExt",0xcdc57508,"Target.getExt","Target.hx",64,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_69_setExt,"Target","setExt",0x9a0dc97c,"Target.setExt","Target.hx",69,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_74_addError,"Target","addError",0xf7607284,"Target.addError","Target.hx",74,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_78_addFiles,"Target","addFiles",0x84cf8533,"Target.addFiles","Target.hx",78,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_86_checkError,"Target","checkError",0x17ca6fbd,"Target.checkError","Target.hx",86,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_95_clean,"Target","clean",0xfcc81ccc,"Target.clean","Target.hx",95,0x0aed57ed)
HX_LOCAL_STACK_FRAME(_hx_pos_73e0a42cdd1e7a73_104_getKey,"Target","getKey",0xcdc9f206,"Target.getKey","Target.hx",104,0x0aed57ed)

void Target_obj::__construct(::String inOutput,::String inTool,::String inToolID){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_25_new)
HXLINE(  26)		this->mOutput = inOutput;
HXLINE(  27)		this->mOutputDir = HX_("",00,00,00,00);
HXLINE(  28)		this->mBuildDir = HX_("",00,00,00,00);
HXLINE(  29)		this->mToolID = inToolID;
HXLINE(  30)		this->mTool = inTool;
HXLINE(  31)		this->mFiles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  32)		this->mDepends = ::Array_obj< ::String >::__new(0);
HXLINE(  33)		this->mAutoLibs = ::Array_obj< ::String >::__new(0);
HXLINE(  34)		this->mLibs = ::Array_obj< ::String >::__new(0);
HXLINE(  35)		this->mLibPaths = ::Array_obj< ::String >::__new(0);
HXLINE(  36)		this->mFlags = ::Array_obj< ::String >::__new(0);
HXLINE(  37)		this->mExt = null();
HXLINE(  38)		this->mFullOutputName = null();
HXLINE(  39)		this->mSubTargets = ::Array_obj< ::String >::__new(0);
HXLINE(  40)		this->mFileGroups = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)		this->mFlags = ::Array_obj< ::String >::__new(0);
HXLINE(  42)		this->mErrors = ::Array_obj< ::String >::__new(0);
HXLINE(  43)		this->mDirs = ::Array_obj< ::String >::__new(0);
            	}

Dynamic Target_obj::__CreateEmpty() { return new Target_obj; }

void *Target_obj::_hx_vtable = 0;

Dynamic Target_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Target_obj > _hx_result = new Target_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Target_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ccc2a31;
}

void Target_obj::merge( ::Target other){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_47_merge)
HXLINE(  48)		this->mFiles = this->mFiles->concat(other->mFiles);
HXLINE(  49)		this->mFileGroups = this->mFileGroups->concat(other->mFileGroups);
HXLINE(  50)		this->mDepends = this->mDepends->concat(other->mDepends);
HXLINE(  51)		this->mSubTargets = this->mSubTargets->concat(other->mSubTargets);
HXLINE(  52)		this->mLibPaths = this->mLibPaths->concat(other->mLibPaths);
HXLINE(  53)		this->mAutoLibs = this->mAutoLibs->concat(other->mAutoLibs);
HXLINE(  54)		this->mLibs = this->mLibs->concat(other->mLibs);
HXLINE(  55)		this->mFlags = this->mFlags->concat(other->mFlags);
HXLINE(  56)		this->mErrors = this->mErrors->concat(other->mErrors);
HXLINE(  57)		this->mDirs = this->mDirs->concat(other->mDirs);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Target_obj,merge,(void))

::String Target_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_60_toString)
HXDLIN(  60)		return this->mToolID;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Target_obj,toString,return )

::String Target_obj::getExt(::String inDefault){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_64_getExt)
HXDLIN(  64)		if (::hx::IsNull( this->mExt )) {
HXDLIN(  64)			return inDefault;
            		}
            		else {
HXDLIN(  64)			return this->mExt;
            		}
HXDLIN(  64)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Target_obj,getExt,return )

void Target_obj::setExt(::String inExt){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_69_setExt)
HXDLIN(  69)		this->mExt = inExt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Target_obj,setExt,(void))

void Target_obj::addError(::String inError){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_74_addError)
HXDLIN(  74)		this->mErrors->push(inError);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Target_obj,addError,(void))

void Target_obj::addFiles( ::FileGroup inGroup,bool inAsLibrary){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_78_addFiles)
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if (!(inGroup->mAsLibrary)) {
HXLINE(  79)			_hx_tmp = inAsLibrary;
            		}
            		else {
HXLINE(  79)			_hx_tmp = true;
            		}
HXDLIN(  79)		inGroup->mAsLibrary = _hx_tmp;
HXLINE(  80)		::Array< ::Dynamic> _hx_tmp1 = this->mFiles;
HXDLIN(  80)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  80)		{
HXLINE(  80)			 ::Dynamic file = inGroup->mFiles->iterator();
HXDLIN(  80)			while(( (bool)(file->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)				 ::File file1 = ( ( ::File)(file->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)				_g->push(file1);
            			}
            		}
HXDLIN(  80)		this->mFiles = _hx_tmp1->concat(_g);
HXLINE(  81)		this->mFileGroups->push(inGroup);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Target_obj,addFiles,(void))

void Target_obj::checkError(){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_86_checkError)
HXDLIN(  86)		if ((this->mErrors->length > 0)) {
HXLINE(  88)			::Log_obj::error(this->mErrors->join(HX_(", ",74,26,00,00)),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Target_obj,checkError,(void))

void Target_obj::clean(){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_95_clean)
HXDLIN(  95)		int _g = 0;
HXDLIN(  95)		::Array< ::String > _g1 = this->mDirs;
HXDLIN(  95)		while((_g < _g1->length)){
HXDLIN(  95)			::String dir = _g1->__get(_g);
HXDLIN(  95)			_g = (_g + 1);
HXLINE(  97)			::Log_obj::info(((HX_("Remove ",3c,47,51,c0) + dir) + HX_("...",ee,0f,23,00)),null());
HXLINE(  98)			::PathManager_obj::removeDirectory(dir);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Target_obj,clean,(void))

::String Target_obj::getKey(){
            	HX_STACKFRAME(&_hx_pos_73e0a42cdd1e7a73_104_getKey)
HXDLIN( 104)		::String _hx_tmp;
HXDLIN( 104)		if (::hx::IsNull( this->mExt )) {
HXDLIN( 104)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXDLIN( 104)			_hx_tmp = this->mExt;
            		}
HXDLIN( 104)		return (this->mOutput + _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Target_obj,getKey,return )


::hx::ObjectPtr< Target_obj > Target_obj::__new(::String inOutput,::String inTool,::String inToolID) {
	::hx::ObjectPtr< Target_obj > __this = new Target_obj();
	__this->__construct(inOutput,inTool,inToolID);
	return __this;
}

::hx::ObjectPtr< Target_obj > Target_obj::__alloc(::hx::Ctx *_hx_ctx,::String inOutput,::String inTool,::String inToolID) {
	Target_obj *__this = (Target_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Target_obj), true, "Target"));
	*(void **)__this = Target_obj::_hx_vtable;
	__this->__construct(inOutput,inTool,inToolID);
	return __this;
}

Target_obj::Target_obj()
{
}

void Target_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Target);
	HX_MARK_MEMBER_NAME(mBuildDir,"mBuildDir");
	HX_MARK_MEMBER_NAME(mOutput,"mOutput");
	HX_MARK_MEMBER_NAME(mOutputDir,"mOutputDir");
	HX_MARK_MEMBER_NAME(mTool,"mTool");
	HX_MARK_MEMBER_NAME(mToolID,"mToolID");
	HX_MARK_MEMBER_NAME(mExt,"mExt");
	HX_MARK_MEMBER_NAME(mFullOutputName,"mFullOutputName");
	HX_MARK_MEMBER_NAME(mFullUnstrippedName,"mFullUnstrippedName");
	HX_MARK_MEMBER_NAME(mFiles,"mFiles");
	HX_MARK_MEMBER_NAME(mFileGroups,"mFileGroups");
	HX_MARK_MEMBER_NAME(mDepends,"mDepends");
	HX_MARK_MEMBER_NAME(mSubTargets,"mSubTargets");
	HX_MARK_MEMBER_NAME(mAutoLibs,"mAutoLibs");
	HX_MARK_MEMBER_NAME(mLibs,"mLibs");
	HX_MARK_MEMBER_NAME(mLibPaths,"mLibPaths");
	HX_MARK_MEMBER_NAME(mFlags,"mFlags");
	HX_MARK_MEMBER_NAME(mErrors,"mErrors");
	HX_MARK_MEMBER_NAME(mDirs,"mDirs");
	HX_MARK_END_CLASS();
}

void Target_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mBuildDir,"mBuildDir");
	HX_VISIT_MEMBER_NAME(mOutput,"mOutput");
	HX_VISIT_MEMBER_NAME(mOutputDir,"mOutputDir");
	HX_VISIT_MEMBER_NAME(mTool,"mTool");
	HX_VISIT_MEMBER_NAME(mToolID,"mToolID");
	HX_VISIT_MEMBER_NAME(mExt,"mExt");
	HX_VISIT_MEMBER_NAME(mFullOutputName,"mFullOutputName");
	HX_VISIT_MEMBER_NAME(mFullUnstrippedName,"mFullUnstrippedName");
	HX_VISIT_MEMBER_NAME(mFiles,"mFiles");
	HX_VISIT_MEMBER_NAME(mFileGroups,"mFileGroups");
	HX_VISIT_MEMBER_NAME(mDepends,"mDepends");
	HX_VISIT_MEMBER_NAME(mSubTargets,"mSubTargets");
	HX_VISIT_MEMBER_NAME(mAutoLibs,"mAutoLibs");
	HX_VISIT_MEMBER_NAME(mLibs,"mLibs");
	HX_VISIT_MEMBER_NAME(mLibPaths,"mLibPaths");
	HX_VISIT_MEMBER_NAME(mFlags,"mFlags");
	HX_VISIT_MEMBER_NAME(mErrors,"mErrors");
	HX_VISIT_MEMBER_NAME(mDirs,"mDirs");
}

::hx::Val Target_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExt") ) { return ::hx::Val( mExt ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTool") ) { return ::hx::Val( mTool ); }
		if (HX_FIELD_EQ(inName,"mLibs") ) { return ::hx::Val( mLibs ); }
		if (HX_FIELD_EQ(inName,"mDirs") ) { return ::hx::Val( mDirs ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"clean") ) { return ::hx::Val( clean_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFiles") ) { return ::hx::Val( mFiles ); }
		if (HX_FIELD_EQ(inName,"mFlags") ) { return ::hx::Val( mFlags ); }
		if (HX_FIELD_EQ(inName,"getExt") ) { return ::hx::Val( getExt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setExt") ) { return ::hx::Val( setExt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKey") ) { return ::hx::Val( getKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mOutput") ) { return ::hx::Val( mOutput ); }
		if (HX_FIELD_EQ(inName,"mToolID") ) { return ::hx::Val( mToolID ); }
		if (HX_FIELD_EQ(inName,"mErrors") ) { return ::hx::Val( mErrors ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mDepends") ) { return ::hx::Val( mDepends ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"addError") ) { return ::hx::Val( addError_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFiles") ) { return ::hx::Val( addFiles_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mBuildDir") ) { return ::hx::Val( mBuildDir ); }
		if (HX_FIELD_EQ(inName,"mAutoLibs") ) { return ::hx::Val( mAutoLibs ); }
		if (HX_FIELD_EQ(inName,"mLibPaths") ) { return ::hx::Val( mLibPaths ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mOutputDir") ) { return ::hx::Val( mOutputDir ); }
		if (HX_FIELD_EQ(inName,"checkError") ) { return ::hx::Val( checkError_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mFileGroups") ) { return ::hx::Val( mFileGroups ); }
		if (HX_FIELD_EQ(inName,"mSubTargets") ) { return ::hx::Val( mSubTargets ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mFullOutputName") ) { return ::hx::Val( mFullOutputName ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mFullUnstrippedName") ) { return ::hx::Val( mFullUnstrippedName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Target_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExt") ) { mExt=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTool") ) { mTool=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mLibs") ) { mLibs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mDirs") ) { mDirs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFiles") ) { mFiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mFlags") ) { mFlags=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mOutput") ) { mOutput=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mToolID") ) { mToolID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mErrors") ) { mErrors=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mDepends") ) { mDepends=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mBuildDir") ) { mBuildDir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mAutoLibs") ) { mAutoLibs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mLibPaths") ) { mLibPaths=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mOutputDir") ) { mOutputDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mFileGroups") ) { mFileGroups=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSubTargets") ) { mSubTargets=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mFullOutputName") ) { mFullOutputName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mFullUnstrippedName") ) { mFullUnstrippedName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Target_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mBuildDir",4c,3c,27,fe));
	outFields->push(HX_("mOutput",4e,13,b9,f5));
	outFields->push(HX_("mOutputDir",9f,66,b7,66));
	outFields->push(HX_("mTool",65,c2,87,fa));
	outFields->push(HX_("mToolID",80,25,c9,7d));
	outFields->push(HX_("mExt",34,06,41,48));
	outFields->push(HX_("mFullOutputName",a8,71,bd,47));
	outFields->push(HX_("mFullUnstrippedName",77,84,6f,fb));
	outFields->push(HX_("mFiles",ca,a2,ac,28));
	outFields->push(HX_("mFileGroups",bd,1a,11,d2));
	outFields->push(HX_("mDepends",9a,e8,30,88));
	outFields->push(HX_("mSubTargets",2f,51,36,da));
	outFields->push(HX_("mAutoLibs",2a,6e,54,d5));
	outFields->push(HX_("mLibs",9b,74,39,f5));
	outFields->push(HX_("mLibPaths",36,23,8f,59));
	outFields->push(HX_("mFlags",9a,ef,9f,2a));
	outFields->push(HX_("mErrors",f8,87,a0,3a));
	outFields->push(HX_("mDirs",93,cd,ef,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Target_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Target_obj,mBuildDir),HX_("mBuildDir",4c,3c,27,fe)},
	{::hx::fsString,(int)offsetof(Target_obj,mOutput),HX_("mOutput",4e,13,b9,f5)},
	{::hx::fsString,(int)offsetof(Target_obj,mOutputDir),HX_("mOutputDir",9f,66,b7,66)},
	{::hx::fsString,(int)offsetof(Target_obj,mTool),HX_("mTool",65,c2,87,fa)},
	{::hx::fsString,(int)offsetof(Target_obj,mToolID),HX_("mToolID",80,25,c9,7d)},
	{::hx::fsString,(int)offsetof(Target_obj,mExt),HX_("mExt",34,06,41,48)},
	{::hx::fsString,(int)offsetof(Target_obj,mFullOutputName),HX_("mFullOutputName",a8,71,bd,47)},
	{::hx::fsString,(int)offsetof(Target_obj,mFullUnstrippedName),HX_("mFullUnstrippedName",77,84,6f,fb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Target_obj,mFiles),HX_("mFiles",ca,a2,ac,28)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Target_obj,mFileGroups),HX_("mFileGroups",bd,1a,11,d2)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mDepends),HX_("mDepends",9a,e8,30,88)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mSubTargets),HX_("mSubTargets",2f,51,36,da)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mAutoLibs),HX_("mAutoLibs",2a,6e,54,d5)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mLibs),HX_("mLibs",9b,74,39,f5)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mLibPaths),HX_("mLibPaths",36,23,8f,59)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mFlags),HX_("mFlags",9a,ef,9f,2a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mErrors),HX_("mErrors",f8,87,a0,3a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Target_obj,mDirs),HX_("mDirs",93,cd,ef,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Target_obj_sStaticStorageInfo = 0;
#endif

static ::String Target_obj_sMemberFields[] = {
	HX_("mBuildDir",4c,3c,27,fe),
	HX_("mOutput",4e,13,b9,f5),
	HX_("mOutputDir",9f,66,b7,66),
	HX_("mTool",65,c2,87,fa),
	HX_("mToolID",80,25,c9,7d),
	HX_("mExt",34,06,41,48),
	HX_("mFullOutputName",a8,71,bd,47),
	HX_("mFullUnstrippedName",77,84,6f,fb),
	HX_("mFiles",ca,a2,ac,28),
	HX_("mFileGroups",bd,1a,11,d2),
	HX_("mDepends",9a,e8,30,88),
	HX_("mSubTargets",2f,51,36,da),
	HX_("mAutoLibs",2a,6e,54,d5),
	HX_("mLibs",9b,74,39,f5),
	HX_("mLibPaths",36,23,8f,59),
	HX_("mFlags",9a,ef,9f,2a),
	HX_("mErrors",f8,87,a0,3a),
	HX_("mDirs",93,cd,ef,ef),
	HX_("merge",b8,a2,c6,05),
	HX_("toString",ac,d0,6e,38),
	HX_("getExt",ab,45,1c,a3),
	HX_("setExt",1f,9a,64,6f),
	HX_("addError",e7,f1,86,ec),
	HX_("addFiles",96,04,f6,79),
	HX_("checkError",e0,cd,19,83),
	HX_("clean",89,71,5b,48),
	HX_("getKey",a9,c2,20,a3),
	::String(null()) };

::hx::Class Target_obj::__mClass;

void Target_obj::__register()
{
	Target_obj _hx_dummy;
	Target_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Target",71,67,81,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Target_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Target_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Target_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Target_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

