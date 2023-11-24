// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_BuildTool
#include <BuildTool.h>
#endif
#ifndef INCLUDED_Log
#include <Log.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_ThreadPool
#include <ThreadPool.h>
#endif
#ifndef INCLUDED_Tools
#include <Tools.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e083ec90a75fbac_41_new,"ThreadPool","new",0x2fc764d8,"ThreadPool.new","ThreadPool.hx",41,0xafdafd98)
HX_DEFINE_STACK_FRAME(_hx_pos_2e083ec90a75fbac_33_new,"ThreadPool","new",0x2fc764d8,"ThreadPool.new","ThreadPool.hx",33,0xafdafd98)
HX_DEFINE_STACK_FRAME(_hx_pos_2e083ec90a75fbac_38_new,"ThreadPool","new",0x2fc764d8,"ThreadPool.new","ThreadPool.hx",38,0xafdafd98)
HX_LOCAL_STACK_FRAME(_hx_pos_2e083ec90a75fbac_46_threadLoop,"ThreadPool","threadLoop",0x320ce4d6,"ThreadPool.threadLoop","ThreadPool.hx",46,0xafdafd98)
HX_LOCAL_STACK_FRAME(_hx_pos_2e083ec90a75fbac_72_setArrayCount,"ThreadPool","setArrayCount",0x017f7530,"ThreadPool.setArrayCount","ThreadPool.hx",72,0xafdafd98)
HX_LOCAL_STACK_FRAME(_hx_pos_2e083ec90a75fbac_77_getNextIndex,"ThreadPool","getNextIndex",0x6f126e31,"ThreadPool.getNextIndex","ThreadPool.hx",77,0xafdafd98)
HX_LOCAL_STACK_FRAME(_hx_pos_2e083ec90a75fbac_92_runJob,"ThreadPool","runJob",0x18d187fa,"ThreadPool.runJob","ThreadPool.hx",92,0xafdafd98)

void ThreadPool_obj::__construct(int inCount){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::ThreadPool,_gthis) HXARGC(1)
            		void _hx_run(int _){
            			HX_GC_STACKFRAME(&_hx_pos_2e083ec90a75fbac_41_new)
HXLINE(  41)			_gthis->runJob(null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_2e083ec90a75fbac_33_new)
HXDLIN(  33)		 ::ThreadPool _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  34)		this->mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
HXLINE(  35)		this->mainThread = ::sys::thread::_Thread::HaxeThread_obj::current();
HXLINE(  36)		this->threads = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		{
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			int _g1 = inCount;
HXDLIN(  37)			while((_g < _g1)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::ThreadPool,_gthis,int,i) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_2e083ec90a75fbac_38_new)
HXLINE(  38)					_gthis->threadLoop(i);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  37)				_g = (_g + 1);
HXDLIN(  37)				int i = (_g - 1);
HXLINE(  38)				::Array< ::Dynamic> _hx_tmp = this->threads;
HXDLIN(  38)				_hx_tmp->push(::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_0(_gthis,i)),false));
            			}
            		}
HXLINE(  41)		::Tools_obj::addOnExitHook( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}

Dynamic ThreadPool_obj::__CreateEmpty() { return new ThreadPool_obj; }

void *ThreadPool_obj::_hx_vtable = 0;

Dynamic ThreadPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThreadPool_obj > _hx_result = new ThreadPool_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ThreadPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54997ba6;
}

void ThreadPool_obj::threadLoop(int threadId){
            	HX_STACKFRAME(&_hx_pos_2e083ec90a75fbac_46_threadLoop)
HXDLIN(  46)		while(true){
HXLINE(  48)			 ::Dynamic job = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(true);
HXLINE(  49)			if (::hx::IsNull( job )) {
HXLINE(  51)				this->mainThread->messages->add(HX_("done",82,f0,6d,42));
HXLINE(  52)				goto _hx_goto_4;
            			}
HXLINE(  55)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  57)				job(threadId);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  59)					{
HXLINE(  59)						null();
            					}
HXDLIN(  59)					 ::Dynamic error = _g;
HXLINE(  61)					if ((::BuildTool_obj::threadExitCode != 0)) {
HXLINE(  62)						::BuildTool_obj::setThreadError(-1);
            					}
            					else {
HXLINE(  64)						::Log_obj::warn((HX_("Error in compile thread: ",60,6e,19,7f) + ::Std_obj::string(error)),null(),null());
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(  67)			this->mainThread->messages->add(HX_("ok",1c,61,00,00));
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,threadLoop,(void))

void ThreadPool_obj::setArrayCount(int inCount){
            	HX_STACKFRAME(&_hx_pos_2e083ec90a75fbac_72_setArrayCount)
HXLINE(  73)		this->arrayIndex = ( (cpp::AtomicInt)(0) );
HXLINE(  74)		this->arrayCount = inCount;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,setArrayCount,(void))

int ThreadPool_obj::getNextIndex(){
            	HX_STACKFRAME(&_hx_pos_2e083ec90a75fbac_77_getNextIndex)
HXLINE(  79)		::cpp::Pointer< cpp::AtomicInt > tmp = ::cpp::Pointer_obj::addressOf(this->arrayIndex);
HXDLIN(  79)		int index = _hx_atomic_inc(tmp);
HXLINE(  86)		if ((index < this->arrayCount)) {
HXLINE(  87)			return index;
            		}
HXLINE(  88)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,getNextIndex,return )

void ThreadPool_obj::runJob( ::Dynamic job){
            	HX_STACKFRAME(&_hx_pos_2e083ec90a75fbac_92_runJob)
HXLINE(  93)		{
HXLINE(  93)			int _g = 0;
HXDLIN(  93)			::Array< ::Dynamic> _g1 = this->threads;
HXDLIN(  93)			while((_g < _g1->length)){
HXLINE(  93)				 ::sys::thread::_Thread::HaxeThread thread = _g1->__get(_g).StaticCast<  ::sys::thread::_Thread::HaxeThread >();
HXDLIN(  93)				_g = (_g + 1);
HXLINE(  94)				thread->messages->add(job);
            			}
            		}
HXLINE(  95)		{
HXLINE(  95)			int _g2 = 0;
HXDLIN(  95)			int _g3 = this->threads->length;
HXDLIN(  95)			while((_g2 < _g3)){
HXLINE(  95)				_g2 = (_g2 + 1);
HXDLIN(  95)				int i = (_g2 - 1);
HXLINE(  96)				::sys::thread::_Thread::Thread_Impl__obj::readMessage(true);
            			}
            		}
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if (::hx::IsNotNull( job )) {
HXLINE(  99)			_hx_tmp = (::BuildTool_obj::threadExitCode != 0);
            		}
            		else {
HXLINE(  99)			_hx_tmp = false;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			::Tools_obj::exit(::BuildTool_obj::threadExitCode);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,runJob,(void))


::hx::ObjectPtr< ThreadPool_obj > ThreadPool_obj::__new(int inCount) {
	::hx::ObjectPtr< ThreadPool_obj > __this = new ThreadPool_obj();
	__this->__construct(inCount);
	return __this;
}

::hx::ObjectPtr< ThreadPool_obj > ThreadPool_obj::__alloc(::hx::Ctx *_hx_ctx,int inCount) {
	ThreadPool_obj *__this = (ThreadPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThreadPool_obj), true, "ThreadPool"));
	*(void **)__this = ThreadPool_obj::_hx_vtable;
	__this->__construct(inCount);
	return __this;
}

ThreadPool_obj::ThreadPool_obj()
{
}

void ThreadPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPool);
	HX_MARK_MEMBER_NAME(threads,"threads");
	HX_MARK_MEMBER_NAME(mainThread,"mainThread");
	HX_MARK_MEMBER_NAME(arrayIndex,"arrayIndex");
	HX_MARK_MEMBER_NAME(arrayCount,"arrayCount");
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_END_CLASS();
}

void ThreadPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(threads,"threads");
	HX_VISIT_MEMBER_NAME(mainThread,"mainThread");
	HX_VISIT_MEMBER_NAME(arrayIndex,"arrayIndex");
	HX_VISIT_MEMBER_NAME(arrayCount,"arrayCount");
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
}

::hx::Val ThreadPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return ::hx::Val( mutex ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"runJob") ) { return ::hx::Val( runJob_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { return ::hx::Val( threads ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { return ::hx::Val( mainThread ); }
		if (HX_FIELD_EQ(inName,"arrayIndex") ) { return ::hx::Val( arrayIndex ); }
		if (HX_FIELD_EQ(inName,"arrayCount") ) { return ::hx::Val( arrayCount ); }
		if (HX_FIELD_EQ(inName,"threadLoop") ) { return ::hx::Val( threadLoop_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNextIndex") ) { return ::hx::Val( getNextIndex_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setArrayCount") ) { return ::hx::Val( setArrayCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ThreadPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { threads=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=inValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrayIndex") ) { arrayIndex=inValue.Cast< cpp::AtomicInt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrayCount") ) { arrayCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("threads",69,f6,91,53));
	outFields->push(HX_("mainThread",e3,97,65,e4));
	outFields->push(HX_("arrayIndex",b9,b2,41,b8));
	outFields->push(HX_("arrayCount",76,5c,90,44));
	outFields->push(HX_("mutex",7f,8f,5b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThreadPool_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ThreadPool_obj,threads),HX_("threads",69,f6,91,53)},
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(int)offsetof(ThreadPool_obj,mainThread),HX_("mainThread",e3,97,65,e4)},
	{::hx::fsUnknown /* cpp::AtomicInt */ ,(int)offsetof(ThreadPool_obj,arrayIndex),HX_("arrayIndex",b9,b2,41,b8)},
	{::hx::fsInt,(int)offsetof(ThreadPool_obj,arrayCount),HX_("arrayCount",76,5c,90,44)},
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(ThreadPool_obj,mutex),HX_("mutex",7f,8f,5b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ThreadPool_obj_sStaticStorageInfo = 0;
#endif

static ::String ThreadPool_obj_sMemberFields[] = {
	HX_("threads",69,f6,91,53),
	HX_("mainThread",e3,97,65,e4),
	HX_("arrayIndex",b9,b2,41,b8),
	HX_("arrayCount",76,5c,90,44),
	HX_("mutex",7f,8f,5b,10),
	HX_("threadLoop",4e,7a,80,43),
	HX_("setArrayCount",b8,9a,08,e6),
	HX_("getNextIndex",a9,51,b0,74),
	HX_("runJob",72,01,7f,3b),
	::String(null()) };

::hx::Class ThreadPool_obj::__mClass;

void ThreadPool_obj::__register()
{
	ThreadPool_obj _hx_dummy;
	ThreadPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ThreadPool",e6,58,d6,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThreadPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThreadPool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreadPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreadPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
