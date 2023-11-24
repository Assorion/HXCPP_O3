// Generated by Haxe 4.3.1
#ifndef INCLUDED_Compiler
#define INCLUDED_Compiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Compiler)
HX_DECLARE_CLASS0(File)
HX_DECLARE_CLASS0(FileGroup)
HX_DECLARE_CLASS1(_Compiler,FlagInfo)



class HXCPP_CLASS_ATTRIBUTES Compiler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Compiler_obj OBJ_;
		Compiler_obj();

	public:
		enum { _hx_ClassId = 0x09f633e3 };

		void __construct(::String inID,::String inExe);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Compiler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Compiler"); }
		static ::hx::ObjectPtr< Compiler_obj > __new(::String inID,::String inExe);
		static ::hx::ObjectPtr< Compiler_obj > __alloc(::hx::Ctx *_hx_ctx,::String inID,::String inExe);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Compiler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Compiler",bf,5b,83,57); }

		::Array< ::Dynamic> mFlags;
		::Array< ::String > mCFlags;
		::Array< ::String > mNvccFlags;
		::Array< ::String > mMMFlags;
		::Array< ::String > mCPPFlags;
		::Array< ::String > mOBJCFlags;
		::Array< ::String > mPCHFlags;
		bool mAddGCCIdentity;
		::String mExe;
		::String mOutFlag;
		::String mObjDir;
		::String mRelObjDir;
		::String mExt;
		::String mPCHExt;
		::String mPCHCreate;
		::String mPCHUse;
		::String mPCHFilename;
		::String mPCH;
		::String mRcExe;
		::String mRcExt;
		::Array< ::String > mRcFlags;
		::String mGetCompilerVersion;
		::String mCompilerVersion;
		::String mCompilerVersionString;
		bool mCached;
		::String mID;
		bool useCacheInPlace;
		::Array< ::String > getFlagStrings();
		::Dynamic getFlagStrings_dyn();

		void addFlag(::String inFlag,::String inTag);
		::Dynamic addFlag_dyn();

		void objToAbsolute();
		::Dynamic objToAbsolute_dyn();

		::String getTargetPrefix();
		::Dynamic getTargetPrefix_dyn();

		void addIdentity(::String ext,::Array< ::String > ioArgs);
		::Dynamic addIdentity_dyn();

		void addOptimTags(::Array< ::String > tagFilter);
		::Dynamic addOptimTags_dyn();

		::Array< ::String > getCompilerDefines(::String inTags);
		::Dynamic getCompilerDefines_dyn();

		::Array< ::String > getArgs( ::File inFile);
		::Dynamic getArgs_dyn();

		void createEmbedFile(::String srcName,::String destName,::String embedName,::String scramble);
		::Dynamic createEmbedFile_dyn();

		void cleanTmp(::String file);
		::Dynamic cleanTmp_dyn();

		::String compile( ::File inFile,int inTid, ::Dynamic headerFunc, ::Dynamic pchTimeStamp);
		::Dynamic compile_dyn();

		bool createCompilerVersion( ::FileGroup inGroup);
		::Dynamic createCompilerVersion_dyn();

		::String getObjName( ::File inFile);
		::Dynamic getObjName_dyn();

		::String getHashedName( ::File inFile,::Array< ::String > args);
		::Dynamic getHashedName_dyn();

		::String getCacheString( ::File inFile);
		::Dynamic getCacheString_dyn();

		::String getCachedObjName( ::File inFile);
		::Dynamic getCachedObjName_dyn();

		bool needsPchObj();
		::Dynamic needsPchObj_dyn();

		::Array< ::String > getPchCompileFlags( ::FileGroup inGroup);
		::Dynamic getPchCompileFlags_dyn();

		::String getPchDir( ::FileGroup inGroup);
		::Dynamic getPchDir_dyn();

		::String precompile( ::FileGroup inGroup,bool inReuseIfPossible);
		::Dynamic precompile_dyn();

		void setPCH(::String inPCH);
		::Dynamic setPCH_dyn();

		bool initPrecompile(::String inDefault);
		::Dynamic initPrecompile_dyn();

};


#endif /* INCLUDED_Compiler */ 