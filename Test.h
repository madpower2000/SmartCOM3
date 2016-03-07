
#ifndef SMARTCOM3TEST_H_
#define SMARTCOM3TEST_H_

#include "SmartCOM3.h"

using namespace SmartCOM3;

class TestRobot : public SmartCOM3::IStClient
{
public:
	void Connected();
	void Disconnected(std::string reason);
	void UpdateQuote(
		std::string symbol,
		time_t datetime,
		double open,
		double high,
		double low,
		double close,
		double last,
		double volume,
		double size,
		double bid,
		double ask,
		double bidsize,
		double asksize,
		double open_int,
		double go_buy,
		double go_sell,
		double go_base,
		double go_base_backed,
		double high_limit,
		double low_limit,
		long trading_status,
		double volat,
		double theor_price);
	void UpdateBidAsk(
		std::string symbol,
		long row,
		long nrows,
		double bid,
		double bidsize,
		double ask,
		double asksize);
	void AddTick(
		std::string symbol,
		time_t datetime,
		double price,
		double volume,
		std::string tradeno,
		OrderAction action);
	void AddBar(
		long row,
		long nrows,
		std::string symbol,
		BarInterval interval,
		time_t datetime,
		double open,
		double high,
		double low,
		double close,
		double volume,
		double open_int);
	void SetPortfolio(
		std::string portfolio,
		double cash,
		double leverage,
		double comission,
		double saldo);
	void AddTrade(
		std::string portfolio,
		std::string symbol,
		std::string orderid,
		double price,
		double amount,
		time_t datetime,
		std::string tradeno);
	void UpdateOrder(
		std::string portfolio,
		std::string symbol,
		OrderState state,
		OrderAction action,
		OrderType type,
		OrderValidity validity,
		double price,
		double amount,
		double stop,
		double filled,
		time_t datetime,
		std::string orderid,
		std::string orderno,
		long status_mask,
		long cookie);
	void UpdatePosition(
		std::string portfolio,
		std::string symbol,
		double avprice,
		double amount,
		double planned);
	void AddTickHistory(
		long row,
		long nrows,
		std::string symbol,
		time_t datetime,
		double price,
		double volume,
		std::string tradeno,
		OrderAction action);
	void AddSymbol(
		long row,
		long nrows,
		std::string symbol,
		std::string short_name,
		std::string int_name,
		std::string type,
		long decimals,
		long lot_size,
		double punkt,
		double step,
		std::string sec_ext_id,
		std::string sec_exch_name,
		time_t expiry_date,
		double days_before_expiry,
		double strike);
	void OrderSucceeded(
		long cookie,
		std::string orderid);
	void OrderFailed(
		long cookie,
		std::string orderid,
		std::string reason);
	void AddPortfolio(
		long row,
		long nrows,
		std::string portfolioName,
		std::string portfolioExch,
		PortfolioStatus portfolioStatus);
	void SetSubscribtionCheckReult(long result);
	void SetMyTrade(
		long row,
		long nrows,
		std::string portfolio,
		std::string symbol,
		time_t datetime,
		double price,
		double volume,
		std::string tradeno,
		OrderAction buysell,
		std::string orderno);
	void SetMyOrder(
		long row,
		long nrows,
		std::string portfolio,
		std::string symbol,
		OrderState state,
		OrderAction action,
		OrderType type,
		OrderValidity validity,
		double price,
		double amount,
		double stop,
		double filled,
		time_t datetime,
		std::string id,
		std::string no,
		long cookie);
	void SetMyClosePos(
		long row,
		long nrows,
		std::string portfolio,
		std::string symbol,
		double amount,
		double price_buy,
		double price_sell,
		time_t postime,
		std::string order_open,
		std::string order_close);
	void OrderCancelSucceeded(std::string orderid);
	void OrderCancelFailed(std::string orderid);
	void OrderMoveSucceeded(std::string orderid);
	void OrderMoveFailed(std::string orderid);
};

#endif