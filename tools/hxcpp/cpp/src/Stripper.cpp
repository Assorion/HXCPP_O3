// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_ProcessManager
#include <ProcessManager.h>
#endif
#ifndef INCLUDED_Stripper
#include <Stripper.h>
#endif
#ifndef INCLUDED_Tools
#include <Tools.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47d5cf43134ebe1d_7_new,"Stripper","new",0x37f1ac97,"Stripper.new","Stripper.hx",7,0xbb5f32b9)
HX_LOCAL_STACK_FRAME(_hx_pos_47d5cf43134ebe1d_13_strip,"Stripper","strip",0x440eeacf,"Stripper.strip","Stripper.hx",13,0xbb5f32b9)

void Stripper_obj::__construct(::String inExe){
            	HX_STACKFRAME(&_hx_pos_47d5cf43134ebe1d_7_new)
HXLINE(   8)		this->mFlags = ::Array_obj< ::String >::__new(0);
HXLINE(   9)		this->mExe = inExe;
            	}

Dynamic Stripper_obj::__CreateEmpty() { return new Stripper_obj; }

void *Stripper_obj::_hx_vtable = 0;

Dynamic Stripper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stripper_obj > _hx_result = new Stripper_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Stripper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12c507e5;
}

void Stripper_obj::strip(::String inTarget){
            	HX_STACKFRAME(&_hx_pos_47d5cf43134ebe1d_13_strip)
HXLINE(  14)		::Array< ::String > args = ::Array_obj< ::String >::__new();
HXLINE(  15)		args = args->concat(this->mFlags);
HXLINE(  16)		args->push(inTarget);
HXLINE(  18)		::Array< ::String > split = this->mExe.split(HX_(" ",20,00,00,00));
HXLINE(  19)		::String exe = ( (::String)(split->shift()) );
HXLINE(  20)		args = split->concat(args);
HXLINE(  22)		int result = ::ProcessManager_obj::runCommand(HX_("",00,00,00,00),exe,args,null(),null(),null(),null());
HXLINE(  23)		if ((result != 0)) {
HXLINE(  25)			::Tools_obj::exit(result);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stripper_obj,strip,(void))


::hx::ObjectPtr< Stripper_obj > Stripper_obj::__new(::String inExe) {
	::hx::ObjectPtr< Stripper_obj > __this = new Stripper_obj();
	__this->__construct(inExe);
	return __this;
}

::hx::ObjectPtr< Stripper_obj > Stripper_obj::__alloc(::hx::Ctx *_hx_ctx,::String inExe) {
	Stripper_obj *__this = (Stripper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stripper_obj), true, "Stripper"));
	*(void **)__this = Stripper_obj::_hx_vtable;
	__this->__construct(inExe);
	return __this;
}

Stripper_obj::Stripper_obj()
{
}

void Stripper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stripper);
	HX_MARK_MEMBER_NAME(mExe,"mExe");
	HX_MARK_MEMBER_NAME(mFlags,"mFlags");
	HX_MARK_END_CLASS();
}

void Stripper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mExe,"mExe");
	HX_VISIT_MEMBER_NAME(mFlags,"mFlags");
}

::hx::Val Stripper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExe") ) { return ::hx::Val( mExe ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"strip") ) { return ::hx::Val( strip_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFlags") ) { return ::hx::Val( mFlags ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Stripper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mExe") ) { mExe=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFlags") ) { mFlags=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stripper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mExe",25,06,41,48));
	outFields->push(HX_("mFlags",9a,ef,9f,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stripper_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Stripper_obj,mExe),HX_("mExe",25,06,41,48)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Stripper_obj,mFlags),HX_("mFlags",9a,ef,9f,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Stripper_obj_sStaticStorageInfo = 0;
#endif

static ::String Stripper_obj_sMemberFields[] = {
	HX_("mExe",25,06,41,48),
	HX_("mFlags",9a,ef,9f,2a),
	HX_("strip",d8,52,18,84),
	::String(null()) };

::hx::Class Stripper_obj::__mClass;

void Stripper_obj::__register()
{
	Stripper_obj _hx_dummy;
	Stripper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Stripper",25,15,34,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stripper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stripper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stripper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stripper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
