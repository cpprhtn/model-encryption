__declspec(dllexport) int EAX() {
	ULONG EAX_REG;

	__asm {
		pushad

		mov eax, 0
		cpuid

		mov EAX_REG, eax

		popad
	}
	return EAX_REG;
}

__declspec(dllexport) int EBX() {
	ULONG EBX_REG;

	__asm {
		pushad

		mov eax, 0
		cpuid

		mov EBX_REG, ebx

		popad
	}
	return EBX_REG;
}

__declspec(dllexport) int EDX() {
	ULONG EDX_REG;

	__asm {
		pushad

		mov eax, 0
		cpuid

		mov EDX_REG, edx

		popad
	}
	return EDX_REG;
}

__declspec(dllexport) int ECX() {
	ULONG ECX_REG;

	__asm {
		pushad

		mov eax, 0
		cpuid

		mov ECX_REG, ecx

		popad
	}
	return ECX_REG;
}