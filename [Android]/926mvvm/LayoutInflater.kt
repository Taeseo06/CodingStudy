package com.example.a926mvvm

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import org.w3c.dom.Text

class MainViewModel : ViewModel() {
    val mainText = MutableLiveData<String>()

    init {
        mainText.value = "문태서 멍청이 유성에몽" + "정상게"
    }

    fun setText(text: String) {
        mainText.value = text
    }
}