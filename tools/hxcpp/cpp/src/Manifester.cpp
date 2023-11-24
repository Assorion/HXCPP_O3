// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Manifester
#include <Manifester.h>
#endif
#ifndef INCLUDED_ProcessManager
#include <ProcessManager.h>
#endif
#ifndef INCLUDED_Tools
#include <Tools.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4cd5751f32a5172_9_new,"Manifester","new",0x9c4f30ee,"Manifester.new","Manifester.hx",9,0x4222c642)
HX_LOCAL_STACK_FRAME(_hx_pos_e4cd5751f32a5172_17_add,"Manifester","add",0x9c4552af,"Manifester.add","Manifester.hx",17,0x4222c642)

void Manifester_obj::__construct(::String inExe){
            	HX_STACKFRAME(&_hx_pos_e4cd5751f32a5172_9_new)
HXLINE(  10)		this->mFlags = ::Array_obj< ::String >::__new(0);
HXLINE(  11)		this->mExe = inExe;
HXLINE(  12)		this->mOutPre = HX_("",00,00,00,00);
HXLINE(  13)		this->mOutPost = HX_("",00,00,00,00);
            	}

Dynamic Manifester_obj::__CreateEmpty() { return new Manifester_obj; }

void *Manifester_obj::_hx_vtable = 0;

Dynamic Manifester_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Manifester_obj > _hx_result = new Manifester_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Manifester_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x383a1184;
}

void Manifester_obj::add(::String binName,::String manifestName,bool isExe){
            	HX_STACKFRAME(&_hx_pos_e4cd5751f32a5172_17_add)
HXLINE(  18)		::Array< ::String > args = ::Array_obj< ::String >::__new();
HXLINE(  19)		args = args->concat(this->mFlags);
HXLINE(  22)		::String _hx_tmp;
HXDLIN(  22)		if (isExe) {
HXLINE(  22)			_hx_tmp = HX_(";1",96,33,00,00);
            		}
            		else {
HXLINE(  22)			_hx_tmp = HX_(";2",97,33,00,00);
            		}
HXDLIN(  22)		this->mOutPost = _hx_tmp;
HXLINE(  24)		::String result = this->mExe;
HXDLIN(  24)		int result1 = ::ProcessManager_obj::runCommand(HX_("",00,00,00,00),result,args->concat(::Array_obj< ::String >::__new(2)->init(0,manifestName)->init(1,((this->mOutPre + binName) + this->mOutPost))),null(),null(),null(),null());
HXLINE(  25)		if ((result1 != 0)) {
HXLINE(  27)			::Tools_obj::exit(result1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Manifester_obj,add,(void))


::hx::ObjectPtr< Manifester_obj > Manifester_obj::__new(::String inExe) {
	::hx::ObjectPtr< Manifester_obj > __this = new Manifester_obj();
	__this->__construct(inExe);
	return __this;
}

::hx::ObjectPtr< Manifester_obj > Manifester_obj::__alloc(::hx::Ctx *_hx_ctx,::String inExe) {
	Manifester_obj *__this = (Manifester_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Manifester_obj), true, "Manifester"));
	*(void **)__this = Manifester_obj::_hx_vtable;
	__this->__construct(inExe);
	return __this;
}

Manifester_obj::Manifester_obj()
{
}

void Manifester_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manifester);
	HX_MARK_MEMBER_NAME(mExe,"mExe");
	HX_MARK_MEMBER_NAME(mFlags,"mFlags");
	HX_MARK_MEMBER_NAME(mOutPre,"mOutPre");
	HX_MARK_MEMBER_NAME(mOutPost,"mOutPost");
	HX_MARK_END_CLASS();
}

void Manifester_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mExe,"mExe");
	HX_VISIT_MEMBER_NAME(mFlags,"mFlags");
	HX_VISIT_MEMBER_NAME(mOutPre,"mOutPre");
	HX_VISIT_MEMBER_NAME(mOutPost,"mOutPost");
}

::hx::Val Manifester_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mExe") ) { return ::hx::Val( mExe ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFlags") ) { return ::hx::Val( mFlags ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mOutPre") ) { return ::hx::Val( mOutPre ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mOutPost") ) { return ::hx::Val( mOutPost ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Manifester_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExe") ) { mExe=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFlags") ) { mFlags=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mOutPre") ) { mOutPre=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mOutPost") ) { mOutPost=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Manifester_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mExe",25,06,41,48));
	outFields->push(HX_("mFlags",9a,ef,9f,2a));
	outFields->push(HX_("mOutPre",82,c8,a0,f5));
	outFields->push(HX_("mOutPost",21,6f,0c,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Manifester_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Manifester_obj,mExe),HX_("mExe",25,06,41,48)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Manifester_obj,mFlags),HX_("mFlags",9a,ef,9f,2a)},
	{::hx::fsString,(int)offsetof(Manifester_obj,mOutPre),HX_("mOutPre",82,c8,a0,f5)},
	{::hx::fsString,(int)offsetof(Manifester_obj,mOutPost),HX_("mOutPost",21,6f,0c,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Manifester_obj_sStaticStorageInfo = 0;
#endif

static ::String Manifester_obj_sMemberFields[] = {
	HX_("mExe",25,06,41,48),
	HX_("mFlags",9a,ef,9f,2a),
	HX_("mOutPre",82,c8,a0,f5),
	HX_("mOutPost",21,6f,0c,f7),
	HX_("add",21,f2,49,00),
	::String(null()) };

::hx::Class Manifester_obj::__mClass;

void Manifester_obj::__register()
{
	Manifester_obj _hx_dummy;
	Manifester_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Manifester",fc,e1,14,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Manifester_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Manifester_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Manifester_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Manifester_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
